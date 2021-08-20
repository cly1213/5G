/*
 * File: nrCRCDecode.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "nrCRCDecode.h"
#include "c_test_data.h"
#include "c_test_emxutil.h"
#include "c_test_rtwutil.h"
#include "c_test_types.h"
#include "nrCRCEncode.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "validatestring.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */
/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double d;
  double d1;
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }
  return y;
}

/*
 * Arguments    : const emxArray_int8_T *blkcrc
 *                const char poly_data[]
 *                const int poly_size[2]
 *                emxArray_int8_T *blk
 *                unsigned int err_data[]
 *                int *err_size
 * Return Type  : void
 */
void b_nrCRCDecode(const emxArray_int8_T *blkcrc, const char poly_data[],
                   const int poly_size[2], emxArray_int8_T *blk,
                   unsigned int err_data[], int *err_size)
{
  static const signed char b_iv[6] = {6, 11, 16, 24, 24, 24};
  emxArray_boolean_T *blkcrcL;
  emxArray_int8_T *b_blkcrc;
  emxArray_int8_T *reEncodedBlk;
  double a_data[24];
  double b_y_data[24];
  double nmatched;
  int b_poly_size[2];
  int partial_match_size[2];
  int gLen;
  int i;
  int i1;
  int loop_ub;
  int partialTrueCount;
  unsigned int u;
  signed char y_data[24];
  signed char tmp_data[6];
  char b_poly_data[3];
  char partial_match_data[3];
  boolean_T polyIndex[6];
  b_poly_size[0] = 1;
  b_poly_size[1] = poly_size[1];
  loop_ub = poly_size[1];
  if (0 <= loop_ub - 1) {
    memcpy(&b_poly_data[0], &poly_data[0], loop_ub * sizeof(char));
  }
  get_match(poly_data, poly_size, partial_match_data, partial_match_size,
            &nmatched);
  if ((nmatched == 0.0) || (partial_match_size[1] == 0)) {
    b_poly_size[0] = 1;
    b_poly_size[1] = 0;
  } else if (!(nmatched > 1.0)) {
    b_poly_size[0] = 1;
    b_poly_size[1] = partial_match_size[1];
    loop_ub = partial_match_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&b_poly_data[0], &partial_match_data[0], loop_ub * sizeof(char));
    }
  }
  b_strcmp(b_poly_data, b_poly_size, polyIndex);
  partialTrueCount = 0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    if (polyIndex[loop_ub]) {
      tmp_data[partialTrueCount] = (signed char)(loop_ub + 1);
      partialTrueCount++;
    }
  }
  emxInit_int8_T(&b_blkcrc, 1);
  gLen = b_iv[tmp_data[0] - 1];
  i = blkcrc->size[0] - gLen;
  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = i;
  }
  i = b_blkcrc->size[0];
  b_blkcrc->size[0] = loop_ub;
  emxEnsureCapacity_int8_T(b_blkcrc, i);
  for (i = 0; i < loop_ub; i++) {
    b_blkcrc->data[i] = blkcrc->data[i];
  }
  emxInit_int8_T(&reEncodedBlk, 1);
  nrCRCEncode(b_blkcrc, poly_data, poly_size, reEncodedBlk);
  emxFree_int8_T(&b_blkcrc);
  if (blkcrc->size[0] == 0) {
    blk->size[0] = 0;
    *err_size = 0;
  } else {
    i = reEncodedBlk->size[0] - gLen;
    if (1 > i) {
      loop_ub = 0;
    } else {
      loop_ub = i;
    }
    i = blk->size[0];
    blk->size[0] = loop_ub;
    emxEnsureCapacity_int8_T(blk, i);
    for (i = 0; i < loop_ub; i++) {
      blk->data[i] = reEncodedBlk->data[i];
    }
    emxInit_boolean_T(&blkcrcL, 1);
    if (blkcrc->size[0] <= gLen) {
      i = blkcrcL->size[0];
      blkcrcL->size[0] = gLen;
      emxEnsureCapacity_boolean_T(blkcrcL, i);
      loop_ub = gLen - blkcrc->size[0];
      for (i = 0; i < loop_ub; i++) {
        blkcrcL->data[i] = false;
      }
      loop_ub = blkcrc->size[0];
      for (i = 0; i < loop_ub; i++) {
        blkcrcL->data[(i + gLen) - blkcrc->size[0]] = (blkcrc->data[i] > 0);
      }
    } else {
      i = reEncodedBlk->size[0] - gLen;
      if (i + 1 > reEncodedBlk->size[0]) {
        i = 0;
        i1 = 0;
      } else {
        i1 = reEncodedBlk->size[0];
      }
      partialTrueCount = blkcrc->size[0] - gLen;
      if (partialTrueCount + 1 > blkcrc->size[0]) {
        partialTrueCount = 0;
      }
      loop_ub = i1 - i;
      i1 = blkcrcL->size[0];
      blkcrcL->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(blkcrcL, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        blkcrcL->data[i1] = ((reEncodedBlk->data[i + i1] > 0) !=
                             (blkcrc->data[partialTrueCount + i1] != 0));
      }
    }
    loop_ub = gLen - 1;
    for (i = 0; i <= loop_ub; i++) {
      y_data[i] = (signed char)((gLen - i) - 1);
    }
    for (loop_ub = 0; loop_ub < gLen; loop_ub++) {
      b_y_data[loop_ub] = rt_powd_snf(2.0, y_data[loop_ub]);
    }
    if (0 <= gLen - 1) {
      memcpy(&a_data[0], &b_y_data[0], gLen * sizeof(double));
    }
    if (0 <= gLen - 1) {
      memcpy(&b_y_data[0], &a_data[0], gLen * sizeof(double));
    }
    partialTrueCount = blkcrcL->size[0];
    loop_ub = blkcrcL->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y_data[i] *= (double)blkcrcL->data[i];
    }
    emxFree_boolean_T(&blkcrcL);
    nmatched = b_y_data[0];
    for (loop_ub = 2; loop_ub <= partialTrueCount; loop_ub++) {
      nmatched += b_y_data[loop_ub - 1];
    }
    *err_size = 1;
    nmatched = rt_roundd_snf(nmatched);
    if (nmatched < 4.294967296E+9) {
      u = (unsigned int)nmatched;
    } else {
      u = MAX_uint32_T;
    }
    err_data[0] = u;
  }
  emxFree_int8_T(&reEncodedBlk);
}

/*
 * Arguments    : const emxArray_int8_T *blkcrc
 *                emxArray_int8_T *blk
 *                emxArray_uint32_T *err
 * Return Type  : void
 */
void nrCRCDecode(const emxArray_int8_T *blkcrc, emxArray_int8_T *blk,
                 emxArray_uint32_T *err)
{
  static const int a[24] = {8388608, 4194304, 2097152, 1048576, 524288, 262144,
                            131072,  65536,   32768,   16384,   8192,   4096,
                            2048,    1024,    512,     256,     128,    64,
                            32,      16,      8,       4,       2,      1};
  emxArray_boolean_T *b_blkcrcL;
  emxArray_boolean_T *blkL;
  emxArray_boolean_T *blkcrcL;
  emxArray_int32_T *x;
  emxArray_int8_T *b_blkcrc;
  emxArray_int8_T *in;
  emxArray_int8_T *inPad;
  emxArray_int8_T *reEncodedBlk;
  emxArray_int8_T *varargin_2;
  emxArray_real_T *y;
  double dividendBlk[25];
  double d;
  int b_i;
  int c_i;
  int i;
  int i1;
  int ibtile;
  int k;
  int loop_ub;
  unsigned int u;
  short b_input_sizes_idx_0;
  short sizes_idx_0;
  signed char remBits[25];
  signed char input_sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  emxInit_boolean_T(&blkL, 2);
  if (1 > blkcrc->size[0] - 24) {
    loop_ub = 0;
  } else {
    loop_ub = blkcrc->size[0] - 24;
  }
  ibtile = blkcrc->size[1];
  i = blkL->size[0] * blkL->size[1];
  blkL->size[0] = loop_ub;
  blkL->size[1] = blkcrc->size[1];
  emxEnsureCapacity_boolean_T(blkL, i);
  for (i = 0; i < ibtile; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      blkL->data[i1 + blkL->size[0] * i] =
          (blkcrc->data[i1 + blkcrc->size[0] * i] != 0);
    }
  }
  emxInit_int8_T(&reEncodedBlk, 2);
  emxInit_boolean_T(&blkcrcL, 2);
  if (loop_ub == 0) {
    reEncodedBlk->size[0] = 0;
    reEncodedBlk->size[1] = blkcrc->size[1];
  } else {
    i = blkcrcL->size[0] * blkcrcL->size[1];
    blkcrcL->size[0] = loop_ub + 24;
    blkcrcL->size[1] = blkcrc->size[1];
    emxEnsureCapacity_boolean_T(blkcrcL, i);
    ibtile = (loop_ub + 24) * blkcrc->size[1];
    for (i = 0; i < ibtile; i++) {
      blkcrcL->data[i] = false;
    }
    i = blkcrc->size[1] - 1;
    emxInit_int8_T(&in, 1);
    emxInit_int8_T(&inPad, 1);
    for (b_i = 0; b_i <= i; b_i++) {
      ibtile = blkL->size[0];
      i1 = in->size[0];
      in->size[0] = blkL->size[0];
      emxEnsureCapacity_int8_T(in, i1);
      for (i1 = 0; i1 < ibtile; i1++) {
        in->data[i1] = (signed char)blkL->data[i1 + blkL->size[0] * b_i];
      }
      i1 = inPad->size[0];
      inPad->size[0] = in->size[0] + 24;
      emxEnsureCapacity_int8_T(inPad, i1);
      ibtile = in->size[0];
      for (i1 = 0; i1 < ibtile; i1++) {
        inPad->data[i1] = in->data[i1];
      }
      for (i1 = 0; i1 < 24; i1++) {
        inPad->data[i1 + in->size[0]] = 0;
      }
      remBits[0] = 0;
      for (i1 = 0; i1 < 24; i1++) {
        remBits[i1 + 1] = inPad->data[i1];
      }
      i1 = inPad->size[0];
      for (ibtile = 0; ibtile <= i1 - 25; ibtile++) {
        for (k = 0; k < 24; k++) {
          dividendBlk[k] = remBits[k + 1];
        }
        dividendBlk[24] = inPad->data[ibtile + 24];
        if (dividendBlk[0] == 1.0) {
          for (k = 0; k < 25; k++) {
            d = (double)iv[k] + dividendBlk[k];
            dividendBlk[k] = d;
            remBits[k] = (signed char)rt_remd_snf(d, 2.0);
          }
        } else {
          for (c_i = 0; c_i < 25; c_i++) {
            remBits[c_i] = (signed char)dividendBlk[c_i];
          }
        }
      }
      ibtile = in->size[0];
      for (i1 = 0; i1 < ibtile; i1++) {
        blkcrcL->data[i1 + blkcrcL->size[0] * b_i] = (in->data[i1] != 0);
      }
      for (i1 = 0; i1 < 24; i1++) {
        blkcrcL->data[(i1 + in->size[0]) + blkcrcL->size[0] * b_i] =
            (remBits[i1 + 1] != 0);
      }
    }
    emxFree_int8_T(&inPad);
    emxFree_int8_T(&in);
    if (blkcrcL->size[0] - 23 > blkcrcL->size[0]) {
      i = 0;
      i1 = 0;
    } else {
      i = blkcrcL->size[0] - 24;
      i1 = blkcrcL->size[0];
    }
    emxInit_int8_T(&varargin_2, 2);
    ibtile = blkcrcL->size[1];
    c_i = i1 - i;
    i1 = varargin_2->size[0] * varargin_2->size[1];
    varargin_2->size[0] = c_i;
    varargin_2->size[1] = blkcrcL->size[1];
    emxEnsureCapacity_int8_T(varargin_2, i1);
    for (i1 = 0; i1 < ibtile; i1++) {
      for (k = 0; k < c_i; k++) {
        varargin_2->data[k + varargin_2->size[0] * i1] =
            (signed char)blkcrcL->data[(i + k) + blkcrcL->size[0] * i1];
      }
    }
    if (loop_ub != 0) {
      b_i = blkcrc->size[1];
    } else if (varargin_2->size[0] != 0) {
      b_i = varargin_2->size[1];
    } else {
      b_i = blkcrc->size[1];
      if (varargin_2->size[1] > blkcrc->size[1]) {
        b_i = varargin_2->size[1];
      }
    }
    empty_non_axis_sizes = (b_i == 0);
    if (empty_non_axis_sizes || (loop_ub != 0)) {
      b_input_sizes_idx_0 = (short)loop_ub;
    } else {
      b_input_sizes_idx_0 = 0;
    }
    if (empty_non_axis_sizes || (varargin_2->size[0] != 0)) {
      sizes_idx_0 = (short)varargin_2->size[0];
    } else {
      sizes_idx_0 = 0;
    }
    emxInit_int8_T(&b_blkcrc, 2);
    ibtile = blkcrc->size[1];
    i = b_blkcrc->size[0] * b_blkcrc->size[1];
    b_blkcrc->size[0] = loop_ub;
    b_blkcrc->size[1] = blkcrc->size[1];
    emxEnsureCapacity_int8_T(b_blkcrc, i);
    for (i = 0; i < ibtile; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_blkcrc->data[i1 + b_blkcrc->size[0] * i] =
            blkcrc->data[i1 + blkcrc->size[0] * i];
      }
    }
    c_i = b_input_sizes_idx_0;
    ibtile = sizes_idx_0;
    i = reEncodedBlk->size[0] * reEncodedBlk->size[1];
    reEncodedBlk->size[0] = b_input_sizes_idx_0 + sizes_idx_0;
    reEncodedBlk->size[1] = b_i;
    emxEnsureCapacity_int8_T(reEncodedBlk, i);
    for (i = 0; i < b_i; i++) {
      for (i1 = 0; i1 < c_i; i1++) {
        reEncodedBlk->data[i1 + reEncodedBlk->size[0] * i] =
            b_blkcrc->data[i1 + b_input_sizes_idx_0 * i];
      }
    }
    emxFree_int8_T(&b_blkcrc);
    for (i = 0; i < b_i; i++) {
      for (i1 = 0; i1 < ibtile; i1++) {
        reEncodedBlk
            ->data[(i1 + b_input_sizes_idx_0) + reEncodedBlk->size[0] * i] =
            varargin_2->data[i1 + sizes_idx_0 * i];
      }
    }
    emxFree_int8_T(&varargin_2);
  }
  emxFree_boolean_T(&blkL);
  if (blkcrc->size[0] == 0) {
    blk->size[0] = 0;
    blk->size[1] = blkcrc->size[1];
    err->size[0] = 0;
    err->size[1] = blkcrc->size[1];
  } else {
    if (1 > reEncodedBlk->size[0] - 24) {
      loop_ub = 0;
    } else {
      loop_ub = reEncodedBlk->size[0] - 24;
    }
    ibtile = reEncodedBlk->size[1];
    i = blk->size[0] * blk->size[1];
    blk->size[0] = loop_ub;
    blk->size[1] = reEncodedBlk->size[1];
    emxEnsureCapacity_int8_T(blk, i);
    for (i = 0; i < ibtile; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        blk->data[i1 + blk->size[0] * i] =
            reEncodedBlk->data[i1 + reEncodedBlk->size[0] * i];
      }
    }
    emxInit_boolean_T(&b_blkcrcL, 2);
    if (blkcrc->size[0] <= 24) {
      i = blkcrcL->size[0] * blkcrcL->size[1];
      blkcrcL->size[0] = blkcrc->size[0];
      blkcrcL->size[1] = blkcrc->size[1];
      emxEnsureCapacity_boolean_T(blkcrcL, i);
      loop_ub = blkcrc->size[0] * blkcrc->size[1];
      for (i = 0; i < loop_ub; i++) {
        blkcrcL->data[i] = (blkcrc->data[i] > 0);
      }
      if (24 - blkcrc->size[0] != 0) {
        b_i = blkcrc->size[1];
      } else {
        b_i = blkcrcL->size[1];
      }
      if ((b_i == 0) || (24 - blkcrc->size[0] != 0)) {
        input_sizes_idx_0 = (signed char)(24 - blkcrc->size[0]);
      } else {
        input_sizes_idx_0 = 0;
      }
      c_i = (short)blkcrcL->size[0];
      i = b_blkcrcL->size[0] * b_blkcrcL->size[1];
      b_blkcrcL->size[0] = input_sizes_idx_0 + (short)blkcrcL->size[0];
      b_blkcrcL->size[1] = b_i;
      emxEnsureCapacity_boolean_T(b_blkcrcL, i);
      for (i = 0; i < b_i; i++) {
        loop_ub = input_sizes_idx_0;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_blkcrcL->data[i1 + b_blkcrcL->size[0] * i] = false;
        }
      }
      for (i = 0; i < b_i; i++) {
        for (i1 = 0; i1 < c_i; i1++) {
          b_blkcrcL->data[(i1 + input_sizes_idx_0) + b_blkcrcL->size[0] * i] =
              blkcrcL->data[i1 + c_i * i];
        }
      }
    } else {
      if (reEncodedBlk->size[0] - 23 > reEncodedBlk->size[0]) {
        i = 0;
        i1 = 0;
      } else {
        i = reEncodedBlk->size[0] - 24;
        i1 = reEncodedBlk->size[0];
      }
      if (blkcrc->size[0] - 23 > blkcrc->size[0]) {
        k = 24;
      } else {
        k = blkcrc->size[0];
      }
      loop_ub = reEncodedBlk->size[1];
      ibtile = i1 - i;
      i1 = b_blkcrcL->size[0] * b_blkcrcL->size[1];
      b_blkcrcL->size[0] = ibtile;
      b_blkcrcL->size[1] = reEncodedBlk->size[1];
      emxEnsureCapacity_boolean_T(b_blkcrcL, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (b_i = 0; b_i < ibtile; b_i++) {
          b_blkcrcL->data[b_i + b_blkcrcL->size[0] * i1] =
              ((reEncodedBlk->data[(i + b_i) + reEncodedBlk->size[0] * i1] >
                0) !=
               (blkcrc->data[((k + b_i) + blkcrc->size[0] * i1) - 24] != 0));
        }
      }
    }
    emxInit_int32_T(&x, 2);
    i = x->size[0] * x->size[1];
    x->size[0] = 24;
    x->size[1] = blkcrc->size[1];
    emxEnsureCapacity_int32_T(x, i);
    c_i = blkcrc->size[1];
    for (b_i = 0; b_i < c_i; b_i++) {
      ibtile = b_i * 24;
      for (k = 0; k < 24; k++) {
        x->data[ibtile + k] = a[k];
      }
    }
    loop_ub = b_blkcrcL->size[0] * b_blkcrcL->size[1];
    i = x->size[0] * x->size[1];
    x->size[0] = b_blkcrcL->size[0];
    x->size[1] = b_blkcrcL->size[1];
    emxEnsureCapacity_int32_T(x, i);
    for (i = 0; i < loop_ub; i++) {
      x->data[i] *= b_blkcrcL->data[i];
    }
    emxFree_boolean_T(&b_blkcrcL);
    emxInit_real_T(&y, 2);
    ibtile = x->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    for (b_i = 0; b_i < ibtile; b_i++) {
      c_i = b_i * 24;
      d = x->data[c_i];
      for (k = 0; k < 23; k++) {
        d += (double)x->data[(c_i + k) + 1];
      }
      y->data[b_i] = d;
    }
    emxFree_int32_T(&x);
    i = err->size[0] * err->size[1];
    err->size[0] = 1;
    err->size[1] = y->size[1];
    emxEnsureCapacity_uint32_T(err, i);
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      d = y->data[i];
      if (d < 4.294967296E+9) {
        u = (unsigned int)d;
      } else {
        u = MAX_uint32_T;
      }
      err->data[i] = u;
    }
    emxFree_real_T(&y);
  }
  emxFree_boolean_T(&blkcrcL);
  emxFree_int8_T(&reEncodedBlk);
}

/*
 * File trailer for nrCRCDecode.c
 *
 * [EOF]
 */
