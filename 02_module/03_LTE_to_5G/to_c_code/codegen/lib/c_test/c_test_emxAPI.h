/*
 * File: c_test_emxAPI.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef C_TEST_EMXAPI_H
#define C_TEST_EMXAPI_H

/* Include Files */
#include "c_test_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern emxArray_int8_T *emxCreateND_int8_T(int numDimensions, const int *size);

extern emxArray_int8_T *emxCreateWrapperND_int8_T(signed char *data,
                                                  int numDimensions,
                                                  const int *size);

extern emxArray_int8_T *emxCreateWrapper_int8_T(signed char *data, int rows,
                                                int cols);

extern emxArray_int8_T *emxCreate_int8_T(int rows, int cols);

extern void emxDestroyArray_int8_T(emxArray_int8_T *emxArray);

extern void emxInitArray_int8_T(emxArray_int8_T **pEmxArray, int numDimensions);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for c_test_emxAPI.h
 *
 * [EOF]
 */
