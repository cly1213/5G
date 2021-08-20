/*
 * File: validatestring.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "validatestring.h"
#include "c_test_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const char str_data[]
 *                const int str_size[2]
 *                char match_data[]
 *                int match_size[2]
 *                double *nmatched
 * Return Type  : void
 */
void get_match(const char str_data[], const int str_size[2], char match_data[],
               int match_size[2], double *nmatched)
{
  static const char cv1[3] = {'2', '4', 'A'};
  static const char cv2[3] = {'2', '4', 'B'};
  static const char cv3[3] = {'2', '4', 'C'};
  static const char b_cv[2] = {'1', '6'};
  int exitg1;
  int kstr;
  int minnanb;
  boolean_T b_bool;
  boolean_T b_guard1 = false;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T matched;
  match_size[0] = 1;
  match_size[1] = 0;
  *nmatched = 0.0;
  matched = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  if (str_size[1] <= 2) {
    b_bool = false;
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (cv[(unsigned char)str_data[kstr]] != '1') {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    if (b_bool) {
      *nmatched = 1.0;
      match_size[0] = 1;
      match_size[1] = 2;
      match_data[0] = '1';
      match_data[1] = '1';
    } else {
      guard5 = true;
    }
  } else {
    guard5 = true;
  }
  if (guard5) {
    if (str_size[1] <= 2) {
      b_bool = false;
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 2) {
          if (cv[(unsigned char)str_data[kstr]] != cv[(int)b_cv[kstr]]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      if (b_bool) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 2;
        match_data[0] = '1';
        match_data[1] = '6';
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  }
  if (guard4) {
    kstr = str_size[1];
    b_bool = false;
    minnanb = str_size[1];
    b_guard1 = false;
    if (kstr <= minnanb) {
      if (minnanb < kstr) {
        minnanb = 2;
      } else {
        minnanb = kstr;
      }
      b_guard1 = true;
    } else if (str_size[1] == 3) {
      minnanb = 3;
      b_guard1 = true;
    }
    if (b_guard1) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr <= minnanb - 1) {
          if (cv[(unsigned char)str_data[kstr]] != cv[(int)cv1[kstr]]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      if (str_size[1] == 3) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 3;
        match_data[0] = '2';
        match_data[1] = '4';
        match_data[2] = 'A';
      } else {
        match_size[0] = 1;
        match_size[1] = 3;
        match_data[0] = '2';
        match_data[1] = '4';
        match_data[2] = 'A';
        matched = true;
        *nmatched = 1.0;
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }
  if (guard3) {
    kstr = str_size[1];
    b_bool = false;
    minnanb = str_size[1];
    b_guard1 = false;
    if (kstr <= minnanb) {
      if (minnanb < kstr) {
        minnanb = 2;
      } else {
        minnanb = kstr;
      }
      b_guard1 = true;
    } else if (str_size[1] == 3) {
      minnanb = 3;
      b_guard1 = true;
    }
    if (b_guard1) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr <= minnanb - 1) {
          if (cv[(unsigned char)str_data[kstr]] != cv[(int)cv2[kstr]]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      if (str_size[1] == 3) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 3;
        match_data[0] = '2';
        match_data[1] = '4';
        match_data[2] = 'B';
      } else {
        if (!matched) {
          match_size[0] = 1;
          match_size[1] = 3;
          match_data[0] = '2';
          match_data[1] = '4';
          match_data[2] = 'B';
        }
        matched = true;
        (*nmatched)++;
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }
  if (guard2) {
    kstr = str_size[1];
    b_bool = false;
    minnanb = str_size[1];
    b_guard1 = false;
    if (kstr <= minnanb) {
      if (minnanb < kstr) {
        minnanb = 2;
      } else {
        minnanb = kstr;
      }
      b_guard1 = true;
    } else if (str_size[1] == 3) {
      minnanb = 3;
      b_guard1 = true;
    }
    if (b_guard1) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr <= minnanb - 1) {
          if (cv[(unsigned char)str_data[kstr]] != cv[(int)cv3[kstr]]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      if (str_size[1] == 3) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 3;
        match_data[0] = '2';
        match_data[1] = '4';
        match_data[2] = 'C';
      } else {
        if (!matched) {
          match_size[0] = 1;
          match_size[1] = 3;
          match_data[0] = '2';
          match_data[1] = '4';
          match_data[2] = 'C';
        }
        (*nmatched)++;
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1 && (*nmatched == 0.0)) {
    match_size[0] = 1;
    match_size[1] = 0;
  }
}

/*
 * File trailer for validatestring.c
 *
 * [EOF]
 */
