/*
 * File: _coder_c_test_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef _CODER_C_TEST_API_H
#define _CODER_C_TEST_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T {
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int8_T */
#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T
typedef struct emxArray_int8_T emxArray_int8_T;
#endif /* typedef_emxArray_int8_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_test(emxArray_int8_T *trBlk, real_T trBlkLen, emxArray_int8_T *decbits);

void c_test_api(const mxArray *const prhs[2], const mxArray **plhs);

void c_test_atexit(void);

void c_test_initialize(void);

void c_test_terminate(void);

void c_test_xil_shutdown(void);

void c_test_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_c_test_api.h
 *
 * [EOF]
 */
