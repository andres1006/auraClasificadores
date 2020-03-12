/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Poly.c
 *
 * Code generation for function 'Poly'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Clasificador_DFT_vs_control.h"
#include "Poly.h"
#include "Clasificador_DFT_vs_control_emxutil.h"

/* Function Definitions */
void Poly(const double svT[10], const emxArray_real_T *x, emxArray_real_T
          *kernelProduct)
{
  int i0;
  int loop_ub;
  emxArray_real_T *temp;
  int i;
  double d0;
  i0 = kernelProduct->size[0] * kernelProduct->size[1];
  kernelProduct->size[0] = x->size[0];
  kernelProduct->size[1] = 10;
  emxEnsureCapacity_real_T1(kernelProduct, i0);
  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i = 0; i < 10; i++) {
      d0 = x->data[i0] * svT[i];
      kernelProduct->data[i0 + kernelProduct->size[0] * i] = d0 + 1.0;
    }
  }

  emxInit_real_T(&temp, 2);
  i0 = temp->size[0] * temp->size[1];
  temp->size[0] = kernelProduct->size[0];
  temp->size[1] = 10;
  emxEnsureCapacity_real_T1(temp, i0);
  loop_ub = kernelProduct->size[0] * kernelProduct->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    temp->data[i0] = kernelProduct->data[i0];
  }

  for (i = 0; i < 2; i++) {
    loop_ub = kernelProduct->size[0] * kernelProduct->size[1] - 1;
    i0 = kernelProduct->size[0] * kernelProduct->size[1];
    kernelProduct->size[1] = 10;
    emxEnsureCapacity_real_T1(kernelProduct, i0);
    for (i0 = 0; i0 <= loop_ub; i0++) {
      kernelProduct->data[i0] *= temp->data[i0];
    }
  }

  emxFree_real_T(&temp);
}

/* End of code generation (Poly.c) */
