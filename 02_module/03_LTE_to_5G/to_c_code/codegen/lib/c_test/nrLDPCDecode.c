/*
 * File: nrLDPCDecode.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "nrLDPCDecode.h"
#include "BPDecode.h"
#include "c_test_emxutil.h"
#include "c_test_types.h"
#include "getParams.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *in
 *                double bgn
 *                emxArray_int8_T *out
 * Return Type  : void
 */
void nrLDPCDecode(const emxArray_real_T *in, double bgn, emxArray_int8_T *out)
{
  emxArray_int32_T *b_offsetWeight;
  emxArray_int32_T *columnIndex;
  emxArray_int32_T *columnIndexMap;
  emxArray_int32_T *columnOffset;
  emxArray_int32_T *columnWeight;
  emxArray_int32_T *indexMap;
  emxArray_int32_T *offsetWeight;
  emxArray_int32_T *rowWeight;
  emxArray_real_T *b_result;
  emxArray_real_T *c_result;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *result;
  emxArray_real_T *x_out;
  double Zc;
  double d;
  double d1;
  double infoLen;
  double numEdges;
  double numParityBits;
  int b_bgn;
  int b_input_sizes_idx_0;
  int b_loop_ub;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int f_loop_ub;
  int g_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int numEdges_idx_0;
  int sizes_idx_0_tmp;
  short input_sizes_idx_0;
  short sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  if (in->size[0] == 0) {
    out->size[0] = 0;
    out->size[1] = in->size[1];
  } else {
    emxInit_int32_T(&offsetWeight, 1);
    emxInit_int32_T(&columnIndexMap, 1);
    emxInit_real_T(&result, 2);
    if (bgn == 1.0) {
      b_bgn = 66;
    } else {
      b_bgn = 50;
    }
    Zc = (double)in->size[0] / (double)b_bgn;
    getParams(bgn, Zc, &infoLen, offsetWeight, columnIndexMap);
    if (((int)(2.0 * Zc) != 0) && (in->size[1] != 0)) {
      b_bgn = in->size[1];
    } else if (in->size[1] != 0) {
      b_bgn = in->size[1];
    } else {
      b_bgn = 0;
    }
    empty_non_axis_sizes = (b_bgn == 0);
    if (empty_non_axis_sizes ||
        (((int)(2.0 * Zc) != 0) && (in->size[1] != 0))) {
      input_sizes_idx_0 = (short)(int)(2.0 * Zc);
    } else {
      input_sizes_idx_0 = 0;
    }
    if (empty_non_axis_sizes || (in->size[1] != 0)) {
      sizes_idx_0 = (short)in->size[0];
    } else {
      sizes_idx_0 = 0;
    }
    b_input_sizes_idx_0 = input_sizes_idx_0;
    sizes_idx_0_tmp = sizes_idx_0;
    i = result->size[0] * result->size[1];
    result->size[0] = input_sizes_idx_0 + sizes_idx_0;
    result->size[1] = b_bgn;
    emxEnsureCapacity_real_T(result, i);
    for (i = 0; i < b_bgn; i++) {
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        result->data[i1 + result->size[0] * i] = 0.0;
      }
    }
    for (i = 0; i < b_bgn; i++) {
      for (i1 = 0; i1 < sizes_idx_0_tmp; i1++) {
        result->data[(i1 + input_sizes_idx_0) + result->size[0] * i] =
            in->data[i1 + sizes_idx_0 * i];
      }
    }
    emxInit_real_T(&x_out, 2);
    Zc = (double)in->size[0] + 2.0 * Zc;
    numParityBits = Zc - infoLen;
    i = x_out->size[0] * x_out->size[1];
    x_out->size[0] = (int)Zc;
    x_out->size[1] = in->size[1];
    emxEnsureCapacity_real_T(x_out, i);
    i = in->size[1];
    if (0 <= in->size[1] - 1) {
      numEdges = (double)columnIndexMap->size[0] / 2.0;
      if (1.0 > numParityBits) {
        loop_ub = 0;
      } else {
        loop_ub = (int)numParityBits;
      }
      b_loop_ub = (int)floor(Zc - 1.0);
      d = 2.0 * numParityBits;
      d1 = 2.0 * numParityBits + Zc;
      if (1.0 > numEdges) {
        c_loop_ub = 0;
      } else {
        c_loop_ub = (int)numEdges;
      }
      d_loop_ub = (int)Zc;
      e_loop_ub = (int)numParityBits;
      numEdges_idx_0 = (int)numEdges;
      i2 = result->size[0];
      f_loop_ub = result->size[0];
      g_loop_ub = (int)numEdges;
    }
    emxInit_real_T(&r, 1);
    emxInit_real_T(&r1, 1);
    emxInit_int32_T(&rowWeight, 1);
    emxInit_int32_T(&columnOffset, 1);
    emxInit_int32_T(&columnWeight, 1);
    emxInit_int32_T(&columnIndex, 1);
    emxInit_int32_T(&indexMap, 1);
    emxInit_real_T(&r2, 2);
    emxInit_real_T(&b_result, 1);
    emxInit_int32_T(&b_offsetWeight, 1);
    emxInit_real_T(&c_result, 1);
    emxInit_real_T(&r3, 1);
    for (sizes_idx_0_tmp = 0; sizes_idx_0_tmp < i; sizes_idx_0_tmp++) {
      if (numParityBits < 1.0) {
        r2->size[0] = 1;
        r2->size[1] = 0;
      } else {
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        b_input_sizes_idx_0 = (int)floor(numParityBits - 1.0);
        r2->size[1] = b_input_sizes_idx_0 + 1;
        emxEnsureCapacity_real_T(r2, i1);
        for (i1 = 0; i1 <= b_input_sizes_idx_0; i1++) {
          r2->data[i1] = (double)i1 + 1.0;
        }
      }
      i1 = rowWeight->size[0];
      rowWeight->size[0] = r2->size[1];
      emxEnsureCapacity_int32_T(rowWeight, i1);
      b_input_sizes_idx_0 = r2->size[1];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        rowWeight->data[i1] =
            offsetWeight->data[(int)(numParityBits + r2->data[i1]) - 1];
      }
      i1 = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = (int)floor(Zc - 1.0) + 1;
      emxEnsureCapacity_real_T(r2, i1);
      for (i1 = 0; i1 <= b_loop_ub; i1++) {
        r2->data[i1] = (double)i1 + 1.0;
      }
      i1 = columnOffset->size[0];
      columnOffset->size[0] = r2->size[1];
      emxEnsureCapacity_int32_T(columnOffset, i1);
      b_input_sizes_idx_0 = r2->size[1];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        columnOffset->data[i1] =
            offsetWeight->data[(int)(d + r2->data[i1]) - 1];
      }
      i1 = columnWeight->size[0];
      columnWeight->size[0] = r2->size[1];
      emxEnsureCapacity_int32_T(columnWeight, i1);
      b_input_sizes_idx_0 = r2->size[1];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        columnWeight->data[i1] =
            offsetWeight->data[(int)(d1 + r2->data[i1]) - 1];
      }
      i1 = columnIndex->size[0];
      columnIndex->size[0] = c_loop_ub;
      emxEnsureCapacity_int32_T(columnIndex, i1);
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        b_bgn = columnIndexMap->data[i1];
        if (b_bgn > 2147483646) {
          b_bgn = MAX_int32_T;
        } else {
          b_bgn++;
        }
        columnIndex->data[i1] = b_bgn;
      }
      if (numEdges < 1.0) {
        r2->size[0] = 1;
        r2->size[1] = 0;
      } else {
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        b_input_sizes_idx_0 = (int)floor(numEdges - 1.0);
        r2->size[1] = b_input_sizes_idx_0 + 1;
        emxEnsureCapacity_real_T(r2, i1);
        for (i1 = 0; i1 <= b_input_sizes_idx_0; i1++) {
          r2->data[i1] = (double)i1 + 1.0;
        }
      }
      i1 = indexMap->size[0];
      indexMap->size[0] = r2->size[1];
      emxEnsureCapacity_int32_T(indexMap, i1);
      b_input_sizes_idx_0 = r2->size[1];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        b_bgn = columnIndexMap->data[(int)(numEdges + r2->data[i1]) - 1];
        if (b_bgn > 2147483646) {
          b_bgn = MAX_int32_T;
        } else {
          b_bgn++;
        }
        indexMap->data[i1] = b_bgn;
      }
      i1 = r->size[0];
      r->size[0] = (int)Zc;
      emxEnsureCapacity_real_T(r, i1);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        r->data[i1] = 0.0;
      }
      i1 = r1->size[0];
      r1->size[0] = (int)numParityBits;
      emxEnsureCapacity_real_T(r1, i1);
      for (i1 = 0; i1 < e_loop_ub; i1++) {
        r1->data[i1] = 0.0;
      }
      i1 = b_result->size[0];
      b_result->size[0] = i2;
      emxEnsureCapacity_real_T(b_result, i1);
      for (i1 = 0; i1 < f_loop_ub; i1++) {
        b_result->data[i1] =
            result->data[i1 + result->size[0] * sizes_idx_0_tmp];
      }
      i1 = b_offsetWeight->size[0];
      b_offsetWeight->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(b_offsetWeight, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_offsetWeight->data[i1] = offsetWeight->data[i1];
      }
      i1 = c_result->size[0];
      c_result->size[0] = columnIndex->size[0];
      emxEnsureCapacity_real_T(c_result, i1);
      b_input_sizes_idx_0 = columnIndex->size[0];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        c_result->data[i1] = result->data[(columnIndex->data[i1] +
                                           result->size[0] * sizes_idx_0_tmp) -
                                          1];
      }
      i1 = r3->size[0];
      r3->size[0] = numEdges_idx_0;
      emxEnsureCapacity_real_T(r3, i1);
      for (i1 = 0; i1 < g_loop_ub; i1++) {
        r3->data[i1] = 0.0;
      }
      BPDecodeImpl(b_result, Zc, numParityBits, b_offsetWeight, rowWeight,
                   columnOffset, columnWeight, columnIndex, indexMap, c_result,
                   r3, r, r1);
      b_input_sizes_idx_0 = r->size[0];
      for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
        x_out->data[i1 + x_out->size[0] * sizes_idx_0_tmp] = r->data[i1];
      }
    }
    emxFree_real_T(&r3);
    emxFree_real_T(&c_result);
    emxFree_int32_T(&b_offsetWeight);
    emxFree_real_T(&b_result);
    emxFree_real_T(&r2);
    emxFree_int32_T(&indexMap);
    emxFree_int32_T(&columnIndex);
    emxFree_int32_T(&columnWeight);
    emxFree_int32_T(&columnOffset);
    emxFree_int32_T(&rowWeight);
    emxFree_real_T(&result);
    emxFree_real_T(&r1);
    emxFree_real_T(&r);
    emxFree_int32_T(&columnIndexMap);
    emxFree_int32_T(&offsetWeight);
    if (1.0 > infoLen) {
      b_loop_ub = 0;
    } else {
      b_loop_ub = (int)infoLen;
    }
    c_loop_ub = x_out->size[1];
    i = out->size[0] * out->size[1];
    out->size[0] = b_loop_ub;
    out->size[1] = x_out->size[1];
    emxEnsureCapacity_int8_T(out, i);
    for (i = 0; i < c_loop_ub; i++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        out->data[i1 + out->size[0] * i] =
            (signed char)(x_out->data[i1 + x_out->size[0] * i] <= 0.0);
      }
    }
    emxFree_real_T(&x_out);
  }
}

/*
 * File trailer for nrLDPCDecode.c
 *
 * [EOF]
 */
