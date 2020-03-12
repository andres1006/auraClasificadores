/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gaussian.c
 *
 * Code generation for function 'Gaussian'
 *
 */

/* Include files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Clasificador_DCL_vs_control.h"
#include "Gaussian.h"

/* Function Definitions */
void Gaussian(const double svT[48], const double svInnerProduct[24], const
              double x[2], double kernelProduct[24])
{
  int k;
  double y;
  double b_y[24];
  int i0;
  for (k = 0; k < 24; k++) {
    b_y[k] = 0.0;
    for (i0 = 0; i0 < 2; i0++) {
      b_y[k] += -2.0 * x[i0] * svT[i0 + (k << 1)];
    }
  }

  y = 0.0;
  for (k = 0; k < 2; k++) {
    y += x[k] * x[k];
  }

  for (k = 0; k < 24; k++) {
    kernelProduct[k] = exp(-((b_y[k] + y) + svInnerProduct[k]));
  }
}

/* End of code generation (Gaussian.c) */
