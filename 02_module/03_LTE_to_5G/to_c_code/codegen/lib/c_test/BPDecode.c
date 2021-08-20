/*
 * File: BPDecode.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "BPDecode.h"
#include "c_test_emxutil.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *Lc
 *                double blockLen
 *                double parityLen
 *                const emxArray_int32_T *rowOffset
 *                const emxArray_int32_T *rowWeight
 *                const emxArray_int32_T *columnOffset
 *                const emxArray_int32_T *columnWeight
 *                const emxArray_int32_T *columnIndex
 *                const emxArray_int32_T *indexMap
 *                emxArray_real_T *Lq
 *                emxArray_real_T *Lr
 *                emxArray_real_T *LQ
 *                emxArray_real_T *finalParityChecks
 * Return Type  : double
 */
double BPDecodeImpl(const emxArray_real_T *Lc, double blockLen,
                    double parityLen, const emxArray_int32_T *rowOffset,
                    const emxArray_int32_T *rowWeight,
                    const emxArray_int32_T *columnOffset,
                    const emxArray_int32_T *columnWeight,
                    const emxArray_int32_T *columnIndex,
                    const emxArray_int32_T *indexMap, emxArray_real_T *Lq,
                    emxArray_real_T *Lr, emxArray_real_T *LQ,
                    emxArray_real_T *finalParityChecks)
{
  emxArray_int32_T *r;
  emxArray_int32_T *y;
  double numIter;
  double productTanh;
  double temp;
  int i;
  int ind;
  int iteration;
  int loop_ub_tmp;
  int m;
  int n;
  int q0;
  int qY;
  int zeroLoc;
  boolean_T hardDecision_data[26356];
  boolean_T exitg1;
  boolean_T result;
  numIter = 0.0;
  iteration = 0;
  emxInit_int32_T(&r, 2);
  emxInit_int32_T(&y, 2);
  exitg1 = false;
  while ((!exitg1) && (iteration < 12)) {
    numIter++;
    loop_ub_tmp = (int)parityLen;
    for (m = 0; m < loop_ub_tmp; m++) {
      zeroLoc = -1;
      productTanh = 1.0;
      i = rowWeight->data[m];
      for (ind = 0; ind < i; ind++) {
        q0 = rowOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          qY = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          qY = MAX_int32_T;
        } else {
          qY = (q0 + ind) + 1;
        }
        if (Lq->data[qY - 1] == 0.0) {
          q0 = rowOffset->data[m];
          if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = (q0 + ind) + 1;
          }
          Lq->data[qY - 1] = 1.0;
          if (zeroLoc == -1) {
            zeroLoc = ind + 1;
          } else {
            zeroLoc = -2;
            productTanh = 0.0;
          }
        } else {
          q0 = rowOffset->data[m];
          if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = (q0 + ind) + 1;
          }
          q0 = rowOffset->data[m];
          if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
            n = MIN_int32_T;
          } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
            n = MAX_int32_T;
          } else {
            n = (q0 + ind) + 1;
          }
          Lq->data[qY - 1] = tanh(Lq->data[n - 1] / 2.0);
          q0 = rowOffset->data[m];
          if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = (q0 + ind) + 1;
          }
          productTanh *= Lq->data[qY - 1];
        }
      }
      if (zeroLoc == -1) {
        i = rowWeight->data[m];
        for (ind = 0; ind < i; ind++) {
          q0 = rowOffset->data[m];
          if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = (q0 + ind) + 1;
          }
          temp = productTanh / Lq->data[qY - 1];
          if (temp == 1.0) {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] = 38.14;
          } else if (temp == -1.0) {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] = -38.14;
          } else {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] =
                log((temp + 1.0) / (1.0 - temp));
          }
        }
      } else if (zeroLoc == -2) {
        if (rowWeight->data[m] < 1) {
          n = 0;
        } else {
          n = rowWeight->data[m];
        }
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = n;
        emxEnsureCapacity_int32_T(y, i);
        if (n > 0) {
          y->data[0] = 1;
          zeroLoc = 1;
          for (q0 = 2; q0 <= n; q0++) {
            zeroLoc++;
            y->data[q0 - 1] = zeroLoc;
          }
        }
        i = r->size[0] * r->size[1];
        r->size[0] = 1;
        r->size[1] = y->size[1];
        emxEnsureCapacity_int32_T(r, i);
        n = y->size[1];
        for (i = 0; i < n; i++) {
          q0 = rowOffset->data[m];
          zeroLoc = y->data[i];
          if ((q0 < 0) && (zeroLoc < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (zeroLoc > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = q0 + zeroLoc;
          }
          r->data[i] = indexMap->data[qY - 1];
        }
        n = y->size[1];
        for (i = 0; i < n; i++) {
          Lr->data[r->data[i] - 1] = 0.0;
        }
      } else {
        i = rowWeight->data[m];
        for (ind = 0; ind < i; ind++) {
          if (ind + 1 != zeroLoc) {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] = 0.0;
          } else if (productTanh == 1.0) {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] = 38.14;
          } else if (productTanh == -1.0) {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] = -38.14;
          } else {
            q0 = rowOffset->data[m];
            if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
              qY = MIN_int32_T;
            } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
              qY = MAX_int32_T;
            } else {
              qY = (q0 + ind) + 1;
            }
            Lr->data[indexMap->data[qY - 1] - 1] =
                log((productTanh + 1.0) / (1.0 - productTanh));
          }
        }
      }
    }
    i = (int)blockLen;
    for (m = 0; m < i; m++) {
      temp = Lc->data[m];
      zeroLoc = columnWeight->data[m];
      for (ind = 0; ind < zeroLoc; ind++) {
        q0 = columnOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          qY = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          qY = MAX_int32_T;
        } else {
          qY = (q0 + ind) + 1;
        }
        temp += Lr->data[qY - 1];
      }
      LQ->data[m] = temp;
    }
    for (m = 0; m < loop_ub_tmp; m++) {
      i = rowWeight->data[m];
      for (ind = 0; ind < i; ind++) {
        q0 = rowOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          qY = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          qY = MAX_int32_T;
        } else {
          qY = (q0 + ind) + 1;
        }
        q0 = rowOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          n = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          n = MAX_int32_T;
        } else {
          n = (q0 + ind) + 1;
        }
        q0 = rowOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          zeroLoc = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          zeroLoc = MAX_int32_T;
        } else {
          zeroLoc = (q0 + ind) + 1;
        }
        Lq->data[qY - 1] = LQ->data[columnIndex->data[n - 1] - 1] -
                           Lr->data[indexMap->data[zeroLoc - 1] - 1];
      }
    }
    n = LQ->size[0];
    for (i = 0; i < n; i++) {
      hardDecision_data[i] = (LQ->data[i] <= 0.0);
    }
    i = finalParityChecks->size[0];
    finalParityChecks->size[0] = (int)parityLen;
    emxEnsureCapacity_real_T(finalParityChecks, i);
    for (i = 0; i < loop_ub_tmp; i++) {
      finalParityChecks->data[i] = 0.0;
    }
    result = false;
    for (m = 0; m < loop_ub_tmp; m++) {
      i = rowWeight->data[m];
      for (ind = 0; ind < i; ind++) {
        q0 = rowOffset->data[m];
        if ((q0 < 0) && (ind + 1 < MIN_int32_T - q0)) {
          qY = MIN_int32_T;
        } else if ((q0 > 0) && (ind + 1 > MAX_int32_T - q0)) {
          qY = MAX_int32_T;
        } else {
          qY = (q0 + ind) + 1;
        }
        if (hardDecision_data[columnIndex->data[qY - 1] - 1]) {
          finalParityChecks->data[m] = 1.0 - finalParityChecks->data[m];
        }
      }
      if ((!result) && (finalParityChecks->data[m] != 0.0)) {
        result = true;
      }
    }
    if (!result) {
      exitg1 = true;
    } else {
      iteration++;
    }
  }
  emxFree_int32_T(&y);
  emxFree_int32_T(&r);
  return numIter;
}

/*
 * File trailer for BPDecode.c
 *
 * [EOF]
 */
