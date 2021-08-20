/*
 * File: nrCRCEncode.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "nrCRCEncode.h"
#include "c_test_data.h"
#include "c_test_emxutil.h"
#include "c_test_rtwutil.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "validatestring.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_cell_wrap_22
#define typedef_cell_wrap_22
typedef struct {
  char f1[3];
} cell_wrap_22;
#endif /* typedef_cell_wrap_22 */

/* Function Definitions */
/*
 * Arguments    : const emxArray_int8_T *blk
 *                const char poly_data[]
 *                const int poly_size[2]
 *                emxArray_int8_T *blkcrc
 * Return Type  : void
 */
void nrCRCEncode(const emxArray_int8_T *blk, const char poly_data[],
                 const int poly_size[2], emxArray_int8_T *blkcrc)
{
  static const signed char iv1[25] = {1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1,
                                      0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1};
  static const signed char iv5[25] = {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0,
                                      1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1};
  static const signed char iv4[17] = {1, 0, 0, 0, 1, 0, 0, 0, 0,
                                      0, 0, 1, 0, 0, 0, 0, 1};
  static const signed char iv3[12] = {1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1};
  static const signed char iv2[7] = {1, 1, 0, 0, 0, 0, 1};
  static const signed char b_iv[6] = {6, 11, 16, 24, 24, 24};
  static const char b_cv[2] = {'1', '6'};
  cell_wrap_22 rv[2];
  cell_wrap_22 rv1[2];
  cell_wrap_22 r;
  cell_wrap_22 r1;
  cell_wrap_22 r2;
  cell_wrap_22 r3;
  emxArray_boolean_T *blkL;
  emxArray_boolean_T *blkcrcL;
  emxArray_int8_T *in;
  emxArray_int8_T *inPad;
  double dividendBlk_data[25];
  double nmatched;
  int b_poly_size[2];
  int partial_match_size[2];
  int b_i;
  int exitg1;
  int exitg3;
  int gLen;
  int i;
  int i1;
  int j;
  int loop_ub;
  int partialTrueCount;
  signed char gPoly_data[25];
  signed char remBits_data[25];
  signed char tmp_data[6];
  char b_poly_data[3];
  char partial_match_data[3];
  boolean_T polyIndex[6];
  boolean_T b_bool;
  boolean_T exitg2;
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
  for (i = 0; i < 6; i++) {
    if (polyIndex[i]) {
      tmp_data[partialTrueCount] = (signed char)(i + 1);
      partialTrueCount++;
    }
  }
  emxInit_boolean_T(&blkL, 1);
  gLen = b_iv[tmp_data[0] - 1];
  b_i = blkL->size[0];
  blkL->size[0] = blk->size[0];
  emxEnsureCapacity_boolean_T(blkL, b_i);
  loop_ub = blk->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    blkL->data[b_i] = (blk->data[b_i] != 0);
  }
  if (blk->size[0] == 0) {
    blkcrc->size[0] = 0;
  } else {
    emxInit_boolean_T(&blkcrcL, 1);
    b_i = blkcrcL->size[0];
    blkcrcL->size[0] = (int)((unsigned int)blk->size[0] + gLen);
    emxEnsureCapacity_boolean_T(blkcrcL, b_i);
    loop_ub = (int)((unsigned int)blk->size[0] + gLen);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      blkcrcL->data[b_i] = false;
    }
    r.f1[0] = '2';
    r1.f1[0] = '2';
    r2.f1[0] = '2';
    r3.f1[0] = '2';
    r.f1[1] = '4';
    r1.f1[1] = '4';
    r2.f1[1] = '4';
    r3.f1[1] = '4';
    r.f1[2] = 'a';
    r1.f1[2] = 'A';
    r2.f1[2] = 'b';
    r3.f1[2] = 'B';
    rv[0] = r;
    rv[1] = r1;
    rv1[0] = r2;
    rv1[1] = r3;
    b_bool = false;
    if (poly_size[1] == 2) {
      partialTrueCount = 0;
      do {
        exitg1 = 0;
        if (partialTrueCount < 2) {
          if (poly_data[partialTrueCount] != '1') {
            exitg1 = 1;
          } else {
            partialTrueCount++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      b_bool = false;
      if (poly_size[1] == 2) {
        partialTrueCount = 0;
        do {
          exitg1 = 0;
          if (partialTrueCount < 2) {
            if (poly_data[partialTrueCount] != b_cv[partialTrueCount]) {
              exitg1 = 1;
            } else {
              partialTrueCount++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        loop_ub = 2;
      } else {
        loop_ub = -1;
        j = 0;
        do {
          exitg1 = 0;
          if (j < 2) {
            b_bool = false;
            if (poly_size[1] == 3) {
              partialTrueCount = 0;
              do {
                exitg3 = 0;
                if (partialTrueCount < 3) {
                  if (poly_data[partialTrueCount] !=
                      rv[j].f1[partialTrueCount]) {
                    exitg3 = 1;
                  } else {
                    partialTrueCount++;
                  }
                } else {
                  b_bool = true;
                  exitg3 = 1;
                }
              } while (exitg3 == 0);
            }
            if (b_bool) {
              loop_ub = 3;
              exitg1 = 1;
            } else {
              j++;
            }
          } else {
            j = 0;
            exitg1 = 2;
          }
        } while (exitg1 == 0);
        if (exitg1 != 1) {
          exitg2 = false;
          while ((!exitg2) && (j < 2)) {
            b_bool = false;
            if (poly_size[1] == 3) {
              partialTrueCount = 0;
              do {
                exitg3 = 0;
                if (partialTrueCount < 3) {
                  if (poly_data[partialTrueCount] !=
                      rv1[j].f1[partialTrueCount]) {
                    exitg3 = 1;
                  } else {
                    partialTrueCount++;
                  }
                } else {
                  b_bool = true;
                  exitg3 = 1;
                }
              } while (exitg3 == 0);
            }
            if (b_bool) {
              loop_ub = 4;
              exitg2 = true;
            } else {
              j++;
            }
          }
        }
      }
    }
    switch (loop_ub) {
    case 0:
      j = 7;
      for (b_i = 0; b_i < 7; b_i++) {
        gPoly_data[b_i] = iv2[b_i];
      }
      break;
    case 1:
      j = 12;
      for (b_i = 0; b_i < 12; b_i++) {
        gPoly_data[b_i] = iv3[b_i];
      }
      break;
    case 2:
      j = 17;
      for (b_i = 0; b_i < 17; b_i++) {
        gPoly_data[b_i] = iv4[b_i];
      }
      break;
    case 3:
      j = 25;
      for (b_i = 0; b_i < 25; b_i++) {
        gPoly_data[b_i] = iv5[b_i];
      }
      break;
    case 4:
      j = 25;
      for (b_i = 0; b_i < 25; b_i++) {
        gPoly_data[b_i] = iv[b_i];
      }
      break;
    default:
      j = 25;
      for (b_i = 0; b_i < 25; b_i++) {
        gPoly_data[b_i] = iv1[b_i];
      }
      break;
    }
    emxInit_int8_T(&in, 1);
    loop_ub = blkL->size[0];
    b_i = in->size[0];
    in->size[0] = blkL->size[0];
    emxEnsureCapacity_int8_T(in, b_i);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      in->data[b_i] = (signed char)blkL->data[b_i];
    }
    emxInit_int8_T(&inPad, 1);
    b_i = inPad->size[0];
    inPad->size[0] = in->size[0] + gLen;
    emxEnsureCapacity_int8_T(inPad, b_i);
    loop_ub = in->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      inPad->data[b_i] = in->data[b_i];
    }
    for (b_i = 0; b_i < gLen; b_i++) {
      inPad->data[b_i + in->size[0]] = 0;
    }
    partialTrueCount = gLen + 1;
    remBits_data[0] = 0;
    for (b_i = 0; b_i < gLen; b_i++) {
      remBits_data[b_i + 1] = inPad->data[b_i];
    }
    b_i = inPad->size[0] - gLen;
    for (i = 0; i < b_i; i++) {
      for (i1 = 0; i1 <= partialTrueCount - 2; i1++) {
        dividendBlk_data[i1] = remBits_data[i1 + 1];
      }
      dividendBlk_data[partialTrueCount - 1] =
          inPad->data[(int)((unsigned int)i + gLen)];
      if (dividendBlk_data[0] == 1.0) {
        partialTrueCount = j;
        for (loop_ub = 0; loop_ub < j; loop_ub++) {
          nmatched = (double)gPoly_data[loop_ub] + dividendBlk_data[loop_ub];
          dividendBlk_data[loop_ub] = nmatched;
          remBits_data[loop_ub] = (signed char)rt_remd_snf(nmatched, 2.0);
        }
      } else {
        for (i1 = 0; i1 < partialTrueCount; i1++) {
          remBits_data[i1] = (signed char)dividendBlk_data[i1];
        }
      }
    }
    emxFree_int8_T(&inPad);
    loop_ub = partialTrueCount - 2;
    partialTrueCount = in->size[0];
    for (b_i = 0; b_i < partialTrueCount; b_i++) {
      blkcrcL->data[b_i] = (in->data[b_i] != 0);
    }
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      blkcrcL->data[b_i + in->size[0]] = (remBits_data[b_i + 1] != 0);
    }
    emxFree_int8_T(&in);
    b_i = blkcrcL->size[0] - gLen;
    if (b_i + 1 > blkcrcL->size[0]) {
      b_i = 0;
      i1 = 0;
    } else {
      i1 = blkcrcL->size[0];
    }
    partialTrueCount = blkcrc->size[0];
    blkcrc->size[0] = (blk->size[0] + i1) - b_i;
    emxEnsureCapacity_int8_T(blkcrc, partialTrueCount);
    loop_ub = blk->size[0];
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      blkcrc->data[partialTrueCount] = blk->data[partialTrueCount];
    }
    loop_ub = i1 - b_i;
    for (i1 = 0; i1 < loop_ub; i1++) {
      blkcrc->data[i1 + blk->size[0]] = (signed char)blkcrcL->data[b_i + i1];
    }
    emxFree_boolean_T(&blkcrcL);
  }
  emxFree_boolean_T(&blkL);
}

/*
 * File trailer for nrCRCEncode.c
 *
 * [EOF]
 */
