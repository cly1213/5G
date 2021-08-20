/*
 * File: c_test.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "c_test.h"
#include "SystemCore.h"
#include "c_test_data.h"
#include "c_test_emxutil.h"
#include "c_test_initialize.h"
#include "c_test_rtwutil.h"
#include "c_test_types.h"
#include "encode.h"
#include "getCBSInfo.h"
#include "getSCHInfo.h"
#include "mod.h"
#include "nrCRCEncode.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * C_TEST Summary of this function goes here
 *    Detailed explanation goes here
 *
 * Arguments    : const emxArray_int8_T *trBlk
 *                double trBlkLen
 *                emxArray_int8_T *decbits
 * Return Type  : void
 */
void c_test(const emxArray_int8_T *trBlk, double trBlkLen,
            emxArray_int8_T *decbits)
{
  emxArray_boolean_T *blkL;
  emxArray_boolean_T *blkcrcL;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_int8_T *codedTrBlock;
  emxArray_int8_T *codeword;
  emxArray_int8_T *crced;
  emxArray_int8_T *inPad;
  emxArray_int8_T *segmented;
  emxArray_int8_T *varargin_2;
  emxArray_real_T *b_segmented;
  emxArray_real_T *cbCRC;
  emxArray_real_T *r;
  nrULSCHDecoder decUL;
  double e_expl_temp[51];
  double dividendBlk[25];
  double N;
  double Zc;
  double b_expl_temp;
  double c_expl_temp;
  double d_expl_temp;
  double expl_temp;
  double j;
  double t2_BGN;
  int t2_CRC_size[2];
  int b_i;
  int c_i;
  int i;
  int i1;
  int i3;
  int input_sizes_idx_0;
  int loop_ub;
  int sizes_idx_0;
  signed char b_e_data[10242];
  signed char e_data[10242];
  signed char remBits[25];
  char t2_CRC_data[3];
  signed char i2;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  boolean_T varargout_2_data;
  if (!isInitialized_c_test) {
    c_test_initialize();
  }
  emxInit_int8_T(&codedTrBlock, 2);
  if (trBlk->size[0] == 0) {
    codedTrBlock->size[0] = 0;
    codedTrBlock->size[1] = 0;
  } else {
    emxInit_int8_T(&codeword, 2);
    emxInit_int8_T(&crced, 1);
    getSCHInfo(trBlk->size[0], 0.5537109375, t2_CRC_data, t2_CRC_size,
               &expl_temp, &t2_BGN, &b_expl_temp, &c_expl_temp, &Zc, &N, &j,
               &d_expl_temp);
    nrCRCEncode(trBlk, t2_CRC_data, t2_CRC_size, crced);
    emxInit_int8_T(&segmented, 2);
    emxInit_real_T(&cbCRC, 2);
    emxInit_int32_T(&ii, 1);
    if (crced->size[0] == 0) {
      segmented->size[0] = 0;
      segmented->size[1] = 1;
    } else {
      i = ii->size[0];
      ii->size[0] = crced->size[0];
      emxEnsureCapacity_int32_T(ii, i);
      loop_ub = crced->size[0];
      for (i = 0; i < loop_ub; i++) {
        ii->data[i] = crced->data[i];
      }
      getCBSInfo(ii->size[0], t2_BGN, &N, &j, &expl_temp, &d_expl_temp,
                 &b_expl_temp, &c_expl_temp, e_expl_temp);
      if (N == 1.0) {
        i = cbCRC->size[0] * cbCRC->size[1];
        cbCRC->size[0] = ii->size[0];
        cbCRC->size[1] = 1;
        emxEnsureCapacity_real_T(cbCRC, i);
        loop_ub = ii->size[0];
        for (i = 0; i < loop_ub; i++) {
          cbCRC->data[i] = (signed char)ii->data[i];
        }
      } else {
        Zc = j * N;
        i = crced->size[0];
        crced->size[0] = ii->size[0] + (int)(Zc - (double)ii->size[0]);
        emxEnsureCapacity_int8_T(crced, i);
        loop_ub = ii->size[0];
        for (i = 0; i < loop_ub; i++) {
          crced->data[i] = (signed char)ii->data[i];
        }
        loop_ub = (int)(Zc - (double)ii->size[0]);
        for (i = 0; i < loop_ub; i++) {
          crced->data[i + ii->size[0]] = 0;
        }
        emxInit_boolean_T(&blkL, 2);
        i = blkL->size[0] * blkL->size[1];
        blkL->size[0] = (int)j;
        i1 = (int)N;
        blkL->size[1] = (int)N;
        emxEnsureCapacity_boolean_T(blkL, i);
        loop_ub = (int)j * (int)N;
        for (i = 0; i < loop_ub; i++) {
          blkL->data[i] = (crced->data[i] != 0);
        }
        emxInit_boolean_T(&blkcrcL, 2);
        i = blkcrcL->size[0] * blkcrcL->size[1];
        blkcrcL->size[0] = (int)j + 24;
        blkcrcL->size[1] = (int)N;
        emxEnsureCapacity_boolean_T(blkcrcL, i);
        loop_ub = ((int)j + 24) * (int)N;
        for (i = 0; i < loop_ub; i++) {
          blkcrcL->data[i] = false;
        }
        emxInit_int8_T(&inPad, 1);
        for (b_i = 0; b_i < i1; b_i++) {
          loop_ub = blkL->size[0];
          i = ii->size[0];
          ii->size[0] = blkL->size[0];
          emxEnsureCapacity_int32_T(ii, i);
          for (i = 0; i < loop_ub; i++) {
            ii->data[i] = blkL->data[i + blkL->size[0] * b_i];
          }
          i = inPad->size[0];
          inPad->size[0] = ii->size[0] + 24;
          emxEnsureCapacity_int8_T(inPad, i);
          loop_ub = ii->size[0];
          for (i = 0; i < loop_ub; i++) {
            inPad->data[i] = (signed char)ii->data[i];
          }
          for (i = 0; i < 24; i++) {
            inPad->data[i + ii->size[0]] = 0;
          }
          remBits[0] = 0;
          for (i = 0; i < 24; i++) {
            remBits[i + 1] = inPad->data[i];
          }
          i = inPad->size[0];
          for (sizes_idx_0 = 0; sizes_idx_0 <= i - 25; sizes_idx_0++) {
            for (i3 = 0; i3 < 24; i3++) {
              dividendBlk[i3] = remBits[i3 + 1];
            }
            dividendBlk[24] = inPad->data[sizes_idx_0 + 24];
            if (dividendBlk[0] == 1.0) {
              for (input_sizes_idx_0 = 0; input_sizes_idx_0 < 25;
                   input_sizes_idx_0++) {
                Zc = (double)iv[input_sizes_idx_0] +
                     dividendBlk[input_sizes_idx_0];
                dividendBlk[input_sizes_idx_0] = Zc;
                remBits[input_sizes_idx_0] = (signed char)rt_remd_snf(Zc, 2.0);
              }
            } else {
              for (c_i = 0; c_i < 25; c_i++) {
                remBits[c_i] = (signed char)dividendBlk[c_i];
              }
            }
          }
          loop_ub = ii->size[0];
          for (i = 0; i < loop_ub; i++) {
            blkcrcL->data[i + blkcrcL->size[0] * b_i] = (ii->data[i] != 0);
          }
          for (i = 0; i < 24; i++) {
            blkcrcL->data[(i + ii->size[0]) + blkcrcL->size[0] * b_i] =
                (remBits[i + 1] != 0);
          }
        }
        emxFree_int8_T(&inPad);
        emxFree_boolean_T(&blkL);
        if (blkcrcL->size[0] - 23 > blkcrcL->size[0]) {
          i = 0;
          i1 = 0;
        } else {
          i = blkcrcL->size[0] - 24;
          i1 = blkcrcL->size[0];
        }
        emxInit_int8_T(&varargin_2, 2);
        loop_ub = blkcrcL->size[1];
        input_sizes_idx_0 = i1 - i;
        i1 = varargin_2->size[0] * varargin_2->size[1];
        varargin_2->size[0] = input_sizes_idx_0;
        varargin_2->size[1] = blkcrcL->size[1];
        emxEnsureCapacity_int8_T(varargin_2, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i3 = 0; i3 < input_sizes_idx_0; i3++) {
            varargin_2->data[i3 + varargin_2->size[0] * i1] =
                (signed char)blkcrcL->data[(i + i3) + blkcrcL->size[0] * i1];
          }
        }
        emxFree_boolean_T(&blkcrcL);
        if (((int)j != 0) && ((int)N != 0)) {
          c_i = (int)N;
        } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
          c_i = varargin_2->size[1];
        } else {
          c_i = (int)N;
          if (varargin_2->size[1] > (int)N) {
            c_i = varargin_2->size[1];
          }
        }
        empty_non_axis_sizes = (c_i == 0);
        if (empty_non_axis_sizes || (((int)j != 0) && ((int)N != 0))) {
          input_sizes_idx_0 = (int)j;
        } else {
          input_sizes_idx_0 = 0;
        }
        if (empty_non_axis_sizes ||
            ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
          sizes_idx_0 = varargin_2->size[0];
        } else {
          sizes_idx_0 = 0;
        }
        i = cbCRC->size[0] * cbCRC->size[1];
        cbCRC->size[0] = input_sizes_idx_0 + sizes_idx_0;
        cbCRC->size[1] = c_i;
        emxEnsureCapacity_real_T(cbCRC, i);
        for (i = 0; i < c_i; i++) {
          for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
            cbCRC->data[i1 + cbCRC->size[0] * i] =
                crced->data[i1 + input_sizes_idx_0 * i];
          }
        }
        for (i = 0; i < c_i; i++) {
          for (i1 = 0; i1 < sizes_idx_0; i1++) {
            cbCRC->data[(i1 + input_sizes_idx_0) + cbCRC->size[0] * i] =
                varargin_2->data[i1 + sizes_idx_0 * i];
          }
        }
        emxFree_int8_T(&varargin_2);
      }
      i = segmented->size[0] * segmented->size[1];
      segmented->size[0] = (int)d_expl_temp;
      segmented->size[1] = (int)N;
      emxEnsureCapacity_int8_T(segmented, i);
      loop_ub = (int)d_expl_temp * (int)N;
      for (i = 0; i < loop_ub; i++) {
        segmented->data[i] = -1;
      }
      if ((cbCRC->size[0] != 0) && (cbCRC->size[1] != 0)) {
        c_i = cbCRC->size[1];
      } else if ((segmented->size[0] != 0) && (segmented->size[1] != 0)) {
        c_i = segmented->size[1];
      } else {
        c_i = cbCRC->size[1];
        if (segmented->size[1] > cbCRC->size[1]) {
          c_i = segmented->size[1];
        }
      }
      empty_non_axis_sizes = (c_i == 0);
      if (empty_non_axis_sizes ||
          ((cbCRC->size[0] != 0) && (cbCRC->size[1] != 0))) {
        input_sizes_idx_0 = cbCRC->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      if (empty_non_axis_sizes ||
          ((segmented->size[0] != 0) && (segmented->size[1] != 0))) {
        sizes_idx_0 = segmented->size[0];
      } else {
        sizes_idx_0 = 0;
      }
      i = segmented->size[0] * segmented->size[1];
      segmented->size[0] = input_sizes_idx_0 + sizes_idx_0;
      segmented->size[1] = c_i;
      emxEnsureCapacity_int8_T(segmented, i);
      for (i = 0; i < c_i; i++) {
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          segmented->data[i1 + segmented->size[0] * i] =
              (signed char)cbCRC->data[i1 + input_sizes_idx_0 * i];
        }
      }
      for (i = 0; i < c_i; i++) {
        for (i1 = 0; i1 < sizes_idx_0; i1++) {
          segmented->data[(i1 + input_sizes_idx_0) + segmented->size[0] * i] =
              -1;
        }
      }
    }
    if (segmented->size[0] == 0) {
      c_i = segmented->size[1];
      segmented->size[0] = 0;
      segmented->size[1] = c_i;
    } else {
      b_i = segmented->size[1];
      if (t2_BGN == 1.0) {
        c_i = 22;
        input_sizes_idx_0 = 66;
      } else {
        c_i = 10;
        input_sizes_idx_0 = 50;
      }
      emxInit_boolean_T(&x, 1);
      Zc = (double)segmented->size[0] / (double)c_i;
      N = Zc * (double)input_sizes_idx_0;
      loop_ub = segmented->size[0];
      i = x->size[0];
      x->size[0] = segmented->size[0];
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (segmented->data[i] == -1);
      }
      input_sizes_idx_0 = x->size[0];
      sizes_idx_0 = 0;
      i = ii->size[0];
      ii->size[0] = x->size[0];
      emxEnsureCapacity_int32_T(ii, i);
      c_i = 0;
      exitg1 = false;
      while ((!exitg1) && (c_i <= input_sizes_idx_0 - 1)) {
        if (x->data[c_i]) {
          sizes_idx_0++;
          ii->data[sizes_idx_0 - 1] = c_i + 1;
          if (sizes_idx_0 >= input_sizes_idx_0) {
            exitg1 = true;
          } else {
            c_i++;
          }
        } else {
          c_i++;
        }
      }
      if (x->size[0] == 1) {
        if (sizes_idx_0 == 0) {
          ii->size[0] = 0;
        }
      } else {
        i = ii->size[0];
        if (1 > sizes_idx_0) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = sizes_idx_0;
        }
        emxEnsureCapacity_int32_T(ii, i);
      }
      emxFree_boolean_T(&x);
      loop_ub = segmented->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_0 = ii->size[0];
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          segmented->data[(ii->data[i1] + segmented->size[0] * i) - 1] = 0;
        }
      }
      emxInit_real_T(&b_segmented, 2);
      i = b_segmented->size[0] * b_segmented->size[1];
      b_segmented->size[0] = segmented->size[0];
      b_segmented->size[1] = segmented->size[1];
      emxEnsureCapacity_real_T(b_segmented, i);
      loop_ub = segmented->size[0] * segmented->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_segmented->data[i] = segmented->data[i];
      }
      encode(b_segmented, t2_BGN, Zc, cbCRC);
      sizes_idx_0 = ii->size[0];
      loop_ub = cbCRC->size[1];
      emxFree_real_T(&b_segmented);
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < sizes_idx_0; i1++) {
          cbCRC->data[(ii->data[i1] + cbCRC->size[0] * i) - 1] = -1.0;
        }
      }
      i = segmented->size[0] * segmented->size[1];
      segmented->size[0] = (int)N;
      segmented->size[1] = b_i;
      emxEnsureCapacity_int8_T(segmented, i);
      loop_ub = (int)N * b_i;
      for (i = 0; i < loop_ub; i++) {
        segmented->data[i] = 0;
      }
      Zc = 2.0 * Zc + 1.0;
      if (Zc > cbCRC->size[0]) {
        i = 0;
        i1 = 0;
      } else {
        i = (int)Zc - 1;
        i1 = cbCRC->size[0];
      }
      loop_ub = cbCRC->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        input_sizes_idx_0 = i1 - i;
        for (sizes_idx_0 = 0; sizes_idx_0 < input_sizes_idx_0; sizes_idx_0++) {
          Zc = rt_roundd_snf(
              cbCRC->data[(i + sizes_idx_0) + cbCRC->size[0] * i3]);
          if (Zc < 128.0) {
            if (Zc >= -128.0) {
              i2 = (signed char)Zc;
            } else {
              i2 = MIN_int8_T;
            }
          } else if (Zc >= 128.0) {
            i2 = MAX_int8_T;
          } else {
            i2 = 0;
          }
          segmented->data[sizes_idx_0 + segmented->size[0] * i3] = i2;
        }
      }
    }
    emxFree_int32_T(&ii);
    emxFree_real_T(&cbCRC);
    if (segmented->size[0] == 0) {
      codeword->size[0] = 0;
      codeword->size[1] = 1;
    } else {
      b_i = segmented->size[1];
      c_i = segmented->size[0];
      codeword->size[0] = 0;
      codeword->size[1] = 1;
      i = segmented->size[1];
      for (sizes_idx_0 = 0; sizes_idx_0 < i; sizes_idx_0++) {
        if (sizes_idx_0 <=
            ((double)b_i - b_mod(1706.6666666666667, b_i)) - 1.0) {
          Zc = 6.0 * floor(10240.0 / (6.0 * (double)b_i));
        } else {
          Zc = 6.0 * ceil(10240.0 / (6.0 * (double)b_i));
        }
        N = 0.0;
        j = 0.0;
        loop_ub = (int)Zc;
        if (0 <= loop_ub - 1) {
          memset(&e_data[0], 0, loop_ub * sizeof(signed char));
        }
        while (N < Zc) {
          i2 = segmented->data[((int)(b_mod(j, c_i) + 1.0) +
                                segmented->size[0] * sizes_idx_0) -
                               1];
          if (i2 != -1) {
            e_data[(int)(N + 1.0) - 1] = i2;
            N++;
          }
          j++;
        }
        loop_ub = (int)(Zc / 6.0);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_e_data[i3 + 6 * i1] = e_data[i1 + loop_ub * i3];
          }
        }
        input_sizes_idx_0 = codeword->size[0];
        i1 = crced->size[0];
        crced->size[0] = codeword->size[0] + 6 * loop_ub;
        emxEnsureCapacity_int8_T(crced, i1);
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          crced->data[i1] = codeword->data[i1];
        }
        loop_ub *= 6;
        for (i1 = 0; i1 < loop_ub; i1++) {
          crced->data[i1 + codeword->size[0]] = b_e_data[i1];
        }
        i1 = codeword->size[0] * codeword->size[1];
        codeword->size[0] = crced->size[0];
        codeword->size[1] = 1;
        emxEnsureCapacity_int8_T(codeword, i1);
        loop_ub = crced->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          codeword->data[i1] = crced->data[i1];
        }
      }
    }
    emxFree_int8_T(&segmented);
    emxFree_int8_T(&crced);
    i = codedTrBlock->size[0] * codedTrBlock->size[1];
    codedTrBlock->size[0] = codeword->size[0];
    codedTrBlock->size[1] = 1;
    emxEnsureCapacity_int8_T(codedTrBlock, i);
    loop_ub = codeword->size[0];
    for (i = 0; i < loop_ub; i++) {
      codedTrBlock->data[i] = codeword->data[i];
    }
    emxFree_int8_T(&codeword);
  }
  emxInitStruct_nrULSCHDecoder(&decUL);
  emxInit_real_T(&r, 2);
  i = decUL.pCWSoftBuffer.f1->size[0] * decUL.pCWSoftBuffer.f1->size[1];
  decUL.pCWSoftBuffer.f1->size[0] = 1;
  decUL.pCWSoftBuffer.f1->size[1] = 1;
  emxEnsureCapacity_real_T(decUL.pCWSoftBuffer.f1, i);
  decUL.pCWSoftBuffer.f1->data[0] = 0.0;
  decUL.pCWSoftBuffer.f2 = 0.0;
  decUL.pCWSoftBuffer.f3 = 0.0;
  decUL.pCWSoftBuffer.f4 = 0.0;
  decUL.pCWSoftBuffer.f5 = 0.0;
  decUL.pCWSoftBuffer.f6 = 0.0;
  decUL.pCWSoftBuffer.f7 = 0.0;
  decUL.pCWSoftBuffer.f8 = 0.0;
  decUL.pCWSoftBuffer.f9 = 0.0;
  decUL.pCWSoftBuffer.f10 = 0.0;
  decUL.pCWSoftBuffer.f11 = 0.0;
  decUL.pCWSoftBuffer.f12 = 0.0;
  decUL.pCWSoftBuffer.f13 = 0.0;
  decUL.pCWSoftBuffer.f14 = 0.0;
  decUL.pCWSoftBuffer.f15 = 0.0;
  decUL.pCWSoftBuffer.f16 = 0.0;
  decUL.isInitialized = 0;
  decUL.TargetCodeRate = 0.5537109375;
  decUL.TransportBlockLength = trBlkLen;
  i = r->size[0] * r->size[1];
  r->size[0] = codedTrBlock->size[0];
  r->size[1] = codedTrBlock->size[1];
  emxEnsureCapacity_real_T(r, i);
  loop_ub = codedTrBlock->size[0] * codedTrBlock->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 1.0 - 2.0 * (double)codedTrBlock->data[i];
  }
  emxFree_int8_T(&codedTrBlock);
  SystemCore_step(&decUL, r, decbits, (boolean_T *)&varargout_2_data, &c_i);
  emxFree_real_T(&r);
  emxFreeStruct_nrULSCHDecoder(&decUL);
}

/*
 * File trailer for c_test.c
 *
 * [EOF]
 */
