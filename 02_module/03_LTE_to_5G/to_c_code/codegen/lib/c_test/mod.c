/*
 * File: mod.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "mod.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : double x
 *                double y
 * Return Type  : double
 */
double b_mod(double x, double y)
{
  double r;
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = 0.0;
    }
  } else if (rtIsNaN(x) || rtIsNaN(y) || rtIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else if (rtIsInf(y)) {
    if (x < 0.0) {
      r = y;
    }
  } else {
    r = fmod(x, y);
    if (r == 0.0) {
      r = y * 0.0;
    } else if (x < 0.0) {
      r += y;
    }
  }
  return r;
}

/*
 * File trailer for mod.c
 *
 * [EOF]
 */
