/*
 * File: SystemCore.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "SystemCore.h"
#include "c_test_emxutil.h"
#include "c_test_types.h"
#include "getCBSInfo.h"
#include "getSCHInfo.h"
#include "mod.h"
#include "nrCRCDecode.h"
#include "nrLDPCDecode.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : nrULSCHDecoder *obj
 *                const emxArray_real_T *varargin_1
 *                emxArray_int8_T *varargout_1
 *                boolean_T varargout_2_data[]
 *                int *varargout_2_size
 * Return Type  : void
 */
void SystemCore_step(nrULSCHDecoder *obj, const emxArray_real_T *varargin_1,
                     emxArray_int8_T *varargout_1, boolean_T varargout_2_data[],
                     int *varargout_2_size)
{
  emxArray_int8_T *b_decoded;
  emxArray_int8_T *cb;
  emxArray_int8_T *decoded;
  emxArray_int8_T *desegmented;
  emxArray_int8_T *rxBits;
  emxArray_real_T *deconcatenated;
  emxArray_real_T *in;
  emxArray_real_T *r;
  emxArray_real_T *raterecovered;
  emxArray_real_T *zeroPad;
  emxArray_uint32_T *err;
  double d_expl_temp[51];
  double varargin_2[2];
  double K;
  double Kd;
  double b_expl_temp;
  double c_expl_temp;
  double cbsinfo_K;
  double cbsinfo_N;
  double expl_temp;
  double gIdx;
  double idx;
  double j;
  double t0_BGN;
  double t0_C;
  double t0_L;
  double t0_N;
  double targetCodeRate;
  double trBlkLen;
  int expl_temp_size[2];
  int t0_CRC_size[2];
  int b_loop_ub;
  int b_r;
  int b_targetCodeRate;
  unsigned int blkErr_data;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int loop_ub;
  int n;
  int sizes_idx_1;
  char expl_temp_data[3];
  char t0_CRC_data[3];
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  if (obj->isInitialized != 1) {
    obj->isInitialized = 1;
    obj->TunablePropsChanged = false;
    getSCHInfo(obj->TransportBlockLength, obj->TargetCodeRate, t0_CRC_data,
               t0_CRC_size, &t0_L, &t0_BGN, &t0_C, &gIdx, &expl_temp,
               &b_expl_temp, &c_expl_temp, &t0_N);
    i = obj->pCWSoftBuffer.f1->size[0] * obj->pCWSoftBuffer.f1->size[1];
    obj->pCWSoftBuffer.f1->size[0] = (int)t0_N;
    obj->pCWSoftBuffer.f1->size[1] = (int)t0_C;
    emxEnsureCapacity_real_T(obj->pCWSoftBuffer.f1, i);
    loop_ub = (int)t0_N * (int)t0_C;
    for (i = 0; i < loop_ub; i++) {
      obj->pCWSoftBuffer.f1->data[i] = 0.0;
    }
  }
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    i = varargout_1->size[0] * varargout_1->size[1];
    varargout_1->size[0] = varargin_1->size[0];
    varargout_1->size[1] = varargin_1->size[1];
    emxEnsureCapacity_int8_T(varargout_1, i);
    loop_ub = varargin_1->size[0] * varargin_1->size[1];
    for (i = 0; i < loop_ub; i++) {
      varargout_1->data[i] = 0;
    }
    *varargout_2_size = 1;
    varargout_2_data[0] = false;
  } else {
    trBlkLen = obj->TransportBlockLength;
    targetCodeRate = obj->TargetCodeRate;
    getSCHInfo(trBlkLen, targetCodeRate, t0_CRC_data, t0_CRC_size, &t0_L,
               &t0_BGN, &t0_C, &gIdx, &expl_temp, &b_expl_temp, &c_expl_temp,
               &t0_N);
    emxInit_real_T(&raterecovered, 2);
    if (!(trBlkLen != 0.0)) {
      raterecovered->size[0] = 0;
      raterecovered->size[1] = 1;
    } else {
      getSCHInfo(trBlkLen, targetCodeRate, expl_temp_data, expl_temp_size,
                 &gIdx, &expl_temp, &b_expl_temp, &c_expl_temp, &j, &idx,
                 &cbsinfo_K, &cbsinfo_N);
      n = varargin_1->size[0];
      gIdx = 1.0;
      i = raterecovered->size[0] * raterecovered->size[1];
      raterecovered->size[0] = (int)cbsinfo_N;
      raterecovered->size[1] = (int)t0_C;
      emxEnsureCapacity_real_T(raterecovered, i);
      loop_ub = (int)cbsinfo_N * (int)t0_C;
      for (i = 0; i < loop_ub; i++) {
        raterecovered->data[i] = 0.0;
      }
      i = (int)((t0_C - 1.0) + 1.0);
      if (0 <= (int)((t0_C - 1.0) + 1.0) - 1) {
        K = cbsinfo_K - 2.0 * idx;
        Kd = K - j;
        b_loop_ub = (int)cbsinfo_N;
        if (Kd + 1.0 > K) {
          i1 = -1;
          i2 = 0;
        } else {
          i1 = (int)(Kd + 1.0) - 2;
          i2 = (int)K;
        }
        i2--;
      }
      emxInit_real_T(&zeroPad, 1);
      emxInit_real_T(&deconcatenated, 2);
      emxInit_real_T(&r, 1);
      emxInit_real_T(&in, 2);
      for (b_r = 0; b_r < i; b_r++) {
        if (b_r <= (t0_C - b_mod((double)n / 6.0, t0_C)) - 1.0) {
          targetCodeRate = 6.0 * floor((double)n / (6.0 * t0_C));
        } else {
          targetCodeRate = 6.0 * ceil((double)n / (6.0 * t0_C));
        }
        if (n < targetCodeRate) {
          loop_ub = varargin_1->size[0];
          if ((int)(targetCodeRate - (double)n) != 0) {
            sizes_idx_1 = (int)(targetCodeRate - (double)n);
          } else {
            sizes_idx_1 = 0;
          }
          i3 = deconcatenated->size[0] * deconcatenated->size[1];
          if ((int)(targetCodeRate - (double)n) != 0) {
            b_targetCodeRate = (int)(targetCodeRate - (double)n);
          } else {
            b_targetCodeRate = 0;
          }
          deconcatenated->size[0] = varargin_1->size[0] + b_targetCodeRate;
          deconcatenated->size[1] = 1;
          emxEnsureCapacity_real_T(deconcatenated, i3);
          for (i3 = 0; i3 < 1; i3++) {
            for (i4 = 0; i4 < loop_ub; i4++) {
              deconcatenated->data[i4] = varargin_1->data[i4];
            }
          }
          for (i3 = 0; i3 < sizes_idx_1; i3++) {
            deconcatenated->data[i3 + loop_ub] = 0.0;
          }
        } else {
          j = (gIdx + targetCodeRate) - 1.0;
          if (gIdx > j) {
            i3 = -1;
            i4 = -1;
          } else {
            i3 = (int)gIdx - 2;
            i4 = (int)j - 1;
          }
          loop_ub = i4 - i3;
          i4 = zeroPad->size[0];
          zeroPad->size[0] = loop_ub;
          emxEnsureCapacity_real_T(zeroPad, i4);
          for (i4 = 0; i4 < loop_ub; i4++) {
            zeroPad->data[i4] = varargin_1->data[(i3 + i4) + 1];
          }
          i3 = deconcatenated->size[0] * deconcatenated->size[1];
          deconcatenated->size[0] = loop_ub;
          deconcatenated->size[1] = 1;
          emxEnsureCapacity_real_T(deconcatenated, i3);
          for (i3 = 0; i3 < loop_ub; i3++) {
            deconcatenated->data[i3] = zeroPad->data[i3];
          }
        }
        gIdx += targetCodeRate;
        sizes_idx_1 = deconcatenated->size[0];
        if (sizes_idx_1 <= 1) {
          sizes_idx_1 = 1;
        }
        if (deconcatenated->size[0] == 0) {
          b_targetCodeRate = 0;
        } else {
          b_targetCodeRate = sizes_idx_1;
        }
        sizes_idx_1 = (int)((double)b_targetCodeRate / 6.0);
        i3 = in->size[0] * in->size[1];
        in->size[0] = sizes_idx_1;
        in->size[1] = 6;
        emxEnsureCapacity_real_T(in, i3);
        for (i3 = 0; i3 < 6; i3++) {
          for (i4 = 0; i4 < sizes_idx_1; i4++) {
            in->data[i4 + in->size[0] * i3] = deconcatenated->data[i3 + 6 * i4];
          }
        }
        sizes_idx_1 = 0;
        j = 0.0;
        i3 = zeroPad->size[0];
        zeroPad->size[0] = b_targetCodeRate;
        emxEnsureCapacity_real_T(zeroPad, i3);
        for (i3 = 0; i3 < b_targetCodeRate; i3++) {
          zeroPad->data[i3] = 0.0;
        }
        while (sizes_idx_1 < b_targetCodeRate) {
          idx = b_mod(j, cbsinfo_N);
          if ((!(idx >= Kd)) || (!(idx < K))) {
            zeroPad->data[sizes_idx_1] = idx + 1.0;
            sizes_idx_1++;
          }
          j++;
        }
        i3 = r->size[0];
        r->size[0] = (int)cbsinfo_N;
        emxEnsureCapacity_real_T(r, i3);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          r->data[i3] = 0.0;
        }
        loop_ub = i2 - i1;
        for (i3 = 0; i3 < loop_ub; i3++) {
          r->data[(i1 + i3) + 1] = rtInf;
        }
        for (sizes_idx_1 = 0; sizes_idx_1 < b_targetCodeRate; sizes_idx_1++) {
          i3 = (int)zeroPad->data[sizes_idx_1] - 1;
          r->data[i3] += in->data[sizes_idx_1];
        }
        loop_ub = r->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          raterecovered->data[i3 + raterecovered->size[0] * b_r] = r->data[i3];
        }
      }
      emxFree_real_T(&in);
      emxFree_real_T(&r);
      emxFree_real_T(&deconcatenated);
      emxFree_real_T(&zeroPad);
    }
    expl_temp_size[0] = obj->pCWSoftBuffer.f1->size[0];
    expl_temp_size[1] = obj->pCWSoftBuffer.f1->size[1];
    varargin_2[0] = t0_N;
    varargin_2[1] = t0_C;
    p = true;
    sizes_idx_1 = 0;
    exitg1 = false;
    while ((!exitg1) && (sizes_idx_1 < 2)) {
      if (!(expl_temp_size[sizes_idx_1] == varargin_2[sizes_idx_1])) {
        p = false;
        exitg1 = true;
      } else {
        sizes_idx_1++;
      }
    }
    b_p = (int)p;
    if (b_p) {
      loop_ub = raterecovered->size[0] * raterecovered->size[1];
      for (i = 0; i < loop_ub; i++) {
        raterecovered->data[i] += obj->pCWSoftBuffer.f1->data[i];
      }
    }
    emxInit_int8_T(&decoded, 2);
    nrLDPCDecode(raterecovered, t0_BGN, decoded);
    idx = trBlkLen + t0_L;
    emxInit_int8_T(&desegmented, 1);
    emxInit_int8_T(&cb, 2);
    emxInit_uint32_T(&err, 2);
    emxInit_int8_T(&b_decoded, 2);
    if ((decoded->size[0] == 0) || (!(idx != 0.0))) {
      desegmented->size[0] = 0;
    } else {
      getCBSInfo(idx, t0_BGN, &gIdx, &expl_temp, &b_expl_temp, &targetCodeRate,
                 &c_expl_temp, &j, d_expl_temp);
      j = (double)decoded->size[0] - targetCodeRate;
      if (1.0 > j) {
        loop_ub = 0;
      } else {
        loop_ub = (int)j;
      }
      if (decoded->size[1] == 1) {
        i = b_decoded->size[0] * b_decoded->size[1];
        b_decoded->size[0] = loop_ub;
        b_decoded->size[1] = 1;
        emxEnsureCapacity_int8_T(b_decoded, i);
        for (i = 0; i < loop_ub; i++) {
          b_decoded->data[i] = decoded->data[i];
        }
        i = desegmented->size[0];
        desegmented->size[0] = loop_ub;
        emxEnsureCapacity_int8_T(desegmented, i);
        for (i = 0; i < loop_ub; i++) {
          desegmented->data[i] = b_decoded->data[i];
        }
      } else {
        sizes_idx_1 = decoded->size[1] - 1;
        for (i = 0; i <= sizes_idx_1; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            decoded->data[i1 + loop_ub * i] =
                decoded->data[i1 + decoded->size[0] * i];
          }
        }
        i = decoded->size[0] * decoded->size[1];
        decoded->size[0] = loop_ub;
        decoded->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_int8_T(decoded, i);
        nrCRCDecode(decoded, cb, err);
        i = desegmented->size[0];
        desegmented->size[0] = cb->size[0] * cb->size[1];
        emxEnsureCapacity_int8_T(desegmented, i);
        loop_ub = cb->size[0] * cb->size[1];
        for (i = 0; i < loop_ub; i++) {
          desegmented->data[i] = cb->data[i];
        }
      }
      i = desegmented->size[0];
      if (1.0 > idx) {
        desegmented->size[0] = 0;
      } else {
        desegmented->size[0] = (int)idx;
      }
      emxEnsureCapacity_int8_T(desegmented, i);
    }
    emxFree_int8_T(&b_decoded);
    emxFree_uint32_T(&err);
    emxFree_int8_T(&cb);
    emxFree_int8_T(&decoded);
    emxInit_int8_T(&rxBits, 1);
    b_nrCRCDecode(desegmented, t0_CRC_data, t0_CRC_size, rxBits,
                  (unsigned int *)&blkErr_data, &sizes_idx_1);
    *varargout_2_size = sizes_idx_1;
    emxFree_int8_T(&desegmented);
    for (i = 0; i < sizes_idx_1; i++) {
      varargout_2_data[0] = (blkErr_data != 0U);
    }
    b_p = (sizes_idx_1 != 0);
    if (b_p) {
      sizes_idx_1 = 0;
      exitg1 = false;
      while ((!exitg1) && (sizes_idx_1 <= *varargout_2_size - 1)) {
        if (!varargout_2_data[0]) {
          b_p = false;
          exitg1 = true;
        } else {
          sizes_idx_1 = 1;
        }
      }
    }
    if (b_p) {
      i = obj->pCWSoftBuffer.f1->size[0] * obj->pCWSoftBuffer.f1->size[1];
      obj->pCWSoftBuffer.f1->size[0] = raterecovered->size[0];
      obj->pCWSoftBuffer.f1->size[1] = raterecovered->size[1];
      emxEnsureCapacity_real_T(obj->pCWSoftBuffer.f1, i);
      loop_ub = raterecovered->size[0] * raterecovered->size[1];
      for (i = 0; i < loop_ub; i++) {
        obj->pCWSoftBuffer.f1->data[i] = raterecovered->data[i];
      }
    } else {
      obj->pCWSoftBuffer.f1->size[0] = 0;
      obj->pCWSoftBuffer.f1->size[1] = 0;
    }
    emxFree_real_T(&raterecovered);
    i = varargout_1->size[0] * varargout_1->size[1];
    varargout_1->size[0] = rxBits->size[0];
    varargout_1->size[1] = 1;
    emxEnsureCapacity_int8_T(varargout_1, i);
    loop_ub = rxBits->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargout_1->data[i] = rxBits->data[i];
    }
    emxFree_int8_T(&rxBits);
  }
}

/*
 * File trailer for SystemCore.c
 *
 * [EOF]
 */
