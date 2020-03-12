/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Clasificador_EHM_vs_control_api.h
 *
 * Code generation for function '_coder_Clasificador_EHM_vs_control_api'
 *
 */

#ifndef _CODER_CLASIFICADOR_EHM_VS_CONTROL_API_H
#define _CODER_CLASIFICADOR_EHM_VS_CONTROL_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Clasificador_EHM_vs_control_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Clasificador_EHM_vs_control(emxArray_real_T *x, emxArray_real_T
  *label);
extern void Clasificador_EHM_vs_control_api(const mxArray * const prhs[1],
  int32_T nlhs, const mxArray *plhs[1]);
extern void Clasificador_EHM_vs_control_atexit(void);
extern void Clasificador_EHM_vs_control_initialize(void);
extern void Clasificador_EHM_vs_control_terminate(void);
extern void Clasificador_EHM_vs_control_xil_terminate(void);

#endif

/* End of code generation (_coder_Clasificador_EHM_vs_control_api.h) */
