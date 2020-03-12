/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Clasificador_EHM_vs_control_mex.c
 *
 * Code generation for function '_coder_Clasificador_EHM_vs_control_mex'
 *
 */

/* Include files */
#include "_coder_Clasificador_EHM_vs_control_api.h"
#include "_coder_Clasificador_EHM_vs_control_mex.h"

/* Function Declarations */
static void c_Clasificador_EHM_vs_control_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void c_Clasificador_EHM_vs_control_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        27, "Clasificador_EHM_vs_control");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "Clasificador_EHM_vs_control");
  }

  /* Call the function. */
  Clasificador_EHM_vs_control_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Clasificador_EHM_vs_control_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(Clasificador_EHM_vs_control_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Clasificador_EHM_vs_control_initialize();

  /* Dispatch the entry-point. */
  c_Clasificador_EHM_vs_control_m(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Clasificador_EHM_vs_control_mex.c) */
