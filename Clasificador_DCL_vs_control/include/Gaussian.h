/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gaussian.h
 *
 * Code generation for function 'Gaussian'
 *
 */

#ifndef GAUSSIAN_H
#define GAUSSIAN_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Clasificador_DCL_vs_control_types.h"

/* Function Declarations */
extern void Gaussian(const double svT[48], const double svInnerProduct[24],
                     const double x[2], double kernelProduct[24]);

#endif

/* End of code generation (Gaussian.h) */
