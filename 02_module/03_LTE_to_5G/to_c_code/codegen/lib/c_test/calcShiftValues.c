/*
 * File: calcShiftValues.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "calcShiftValues.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double V_data[]
 *                const int V_size[2]
 *                double Z
 *                double P_data[]
 *                int P_size[2]
 * Return Type  : void
 */
void calcShiftValues(const double V_data[], const int V_size[2], double Z,
                     double P_data[], int P_size[2])
{
  double d;
  int b_i;
  int i;
  int j;
  int loop_ub;
  P_size[0] = (signed char)V_size[0];
  P_size[1] = (signed char)V_size[1];
  loop_ub = (signed char)V_size[0] * (signed char)V_size[1];
  if (0 <= loop_ub - 1) {
    memset(&P_data[0], 0, loop_ub * sizeof(double));
  }
  loop_ub = V_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_i = V_size[1];
    for (j = 0; j < b_i; j++) {
      d = V_data[i + V_size[0] * j];
      if (d == -1.0) {
        P_data[i + P_size[0] * j] = -1.0;
      } else {
        P_data[i + P_size[0] * j] = b_mod(d, Z);
      }
    }
  }
}

/*
 * File trailer for calcShiftValues.c
 *
 * [EOF]
 */
