/*
 * File: strcmp.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "strcmp.h"
#include "c_test_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const char a_data[]
 *                const int a_size[2]
 *                boolean_T b_bool[6]
 * Return Type  : void
 */
void b_strcmp(const char a_data[], const int a_size[2], boolean_T b_bool[6])
{
  static const char cv1[3] = {'2', '4', 'A'};
  static const char cv2[3] = {'2', '4', 'B'};
  static const char cv3[3] = {'2', '4', 'C'};
  static const char b_cv[2] = {'1', '6'};
  int exitg1;
  int kstr;
  b_bool[0] = false;
  if ((a_size[1] == 1) && (!(cv[(unsigned char)a_data[0]] != '6'))) {
    b_bool[0] = true;
  }
  b_bool[1] = false;
  if (a_size[1] == 2) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (cv[(unsigned char)a_data[kstr]] != '1') {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool[1] = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b_bool[2] = false;
  if (a_size[1] == 2) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (cv[(unsigned char)a_data[kstr]] != cv[(int)b_cv[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool[2] = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b_bool[3] = false;
  if (a_size[1] == 3) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (cv[(unsigned char)a_data[kstr]] != cv[(int)cv1[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool[3] = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b_bool[4] = false;
  if (a_size[1] == 3) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (cv[(unsigned char)a_data[kstr]] != cv[(int)cv2[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool[4] = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b_bool[5] = false;
  if (a_size[1] == 3) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (cv[(unsigned char)a_data[kstr]] != cv[(int)cv3[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool[5] = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
}

/*
 * File trailer for strcmp.c
 *
 * [EOF]
 */
