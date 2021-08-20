/*
 * File: sortLE.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "sortLE.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *v
 *                int idx1
 *                int idx2
 * Return Type  : boolean_T
 */
boolean_T sortLE(const emxArray_real_T *v, int idx1, int idx2)
{
  double v1;
  double v2;
  int k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    v1 = v->data[(idx1 + v->size[0] * k) - 1];
    v2 = v->data[(idx2 + v->size[0] * k) - 1];
    if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2))) {
      k++;
    } else {
      if ((!(v1 <= v2)) && (!rtIsNaN(v2))) {
        p = false;
      }
      exitg1 = true;
    }
  }
  return p;
}

/*
 * File trailer for sortLE.c
 *
 * [EOF]
 */
