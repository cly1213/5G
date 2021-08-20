/*
 * File: encode.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef ENCODE_H
#define ENCODE_H

/* Include Files */
#include "c_test_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void encode(const emxArray_real_T *infoBits, double bgn, double Zc,
            emxArray_real_T *codewords);

void encode_init(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for encode.h
 *
 * [EOF]
 */
