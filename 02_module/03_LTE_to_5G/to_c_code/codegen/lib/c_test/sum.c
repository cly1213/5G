/*
 * File: sum.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "sum.h"
#include "c_test_emxutil.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_int8_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void sum(const emxArray_int8_T *x, emxArray_real_T *y)
{
  emxArray_real_T *bsum;
  int bvstride;
  int firstBlockLength;
  int ib;
  int k;
  int lastBlockLength;
  int nblocks;
  int vstride;
  int xblockoffset;
  int xj;
  int xoffset;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    xblockoffset = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(y, xblockoffset);
    firstBlockLength = x->size[0];
    for (xblockoffset = 0; xblockoffset < firstBlockLength; xblockoffset++) {
      y->data[xblockoffset] = 0.0;
    }
  } else {
    emxInit_real_T(&bsum, 1);
    vstride = x->size[0] - 1;
    bvstride = x->size[0] << 10;
    xblockoffset = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(y, xblockoffset);
    xblockoffset = bsum->size[0];
    bsum->size[0] = x->size[0];
    emxEnsureCapacity_real_T(bsum, xblockoffset);
    if (x->size[1] <= 1024) {
      firstBlockLength = x->size[1];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[1] / 1024;
      lastBlockLength = x->size[1] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xj = 0; xj <= vstride; xj++) {
      y->data[xj] = x->data[xj];
      bsum->data[xj] = 0.0;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * (vstride + 1);
      for (xj = 0; xj <= vstride; xj++) {
        y->data[xj] += (double)x->data[xoffset + xj];
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      for (xj = 0; xj <= vstride; xj++) {
        bsum->data[xj] = x->data[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * (vstride + 1);
        for (xj = 0; xj <= vstride; xj++) {
          bsum->data[xj] += (double)x->data[xoffset + xj];
        }
      }
      for (xj = 0; xj <= vstride; xj++) {
        y->data[xj] += bsum->data[xj];
      }
    }
    emxFree_real_T(&bsum);
  }
}

/*
 * File trailer for sum.c
 *
 * [EOF]
 */
