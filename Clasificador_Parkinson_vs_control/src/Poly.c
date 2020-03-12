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
#include "Clasificador_Parkinson_vs_control.h"
#include "Poly.h"
#include "Clasificador_Parkinson_vs_control_emxutil.h"

/* Function Definitions */
void Poly(const emxArray_real_T *x, emxArray_real_T *kernelProduct)
{
  int m;
  int coffset;
  int j;
  int boffset;
  int i;
  int k;
  int aoffset;
  static const double dv1[32] = { 0.63673710397286487, 0.43152956694547484,
    0.4760924280562831, 0.6597423186954855, 0.4760924280562831,
    0.6597423186954855, 0.4760924280562831, 0.6597423186954855,
    0.4760924280562831, 0.43152956694547484, 0.31544773286233924,
    0.6597423186954855, 0.31544773286233924, 0.6597423186954855,
    0.4760924280562831, 0.6597423186954855, 0.31544773286233924,
    0.43152956694547484, 0.31544773286233924, 0.43152956694547484,
    0.63673710397286487, 0.2033168151954643, 0.31544773286233924,
    0.43152956694547484, 0.4760924280562831, 0.6597423186954855,
    0.31544773286233924, 0.43152956694547484, 0.63673710397286487,
    0.43152956694547484, 0.31544773286233924, 0.2033168151954643 };

  m = x->size[0];
  coffset = kernelProduct->size[0] * kernelProduct->size[1];
  kernelProduct->size[0] = x->size[0];
  kernelProduct->size[1] = 16;
  emxEnsureCapacity_real_T1(kernelProduct, coffset);
  for (j = 0; j < 16; j++) {
    coffset = j * m;
    boffset = j << 1;
    for (i = 1; i <= m; i++) {
      kernelProduct->data[(coffset + i) - 1] = 0.0;
    }

    for (k = 0; k < 2; k++) {
      aoffset = k * m;
      for (i = 0; i < m; i++) {
        kernelProduct->data[coffset + i] += dv1[boffset + k] * x->data[aoffset +
          i];
      }
    }
  }

  j = kernelProduct->size[0] * kernelProduct->size[1] - 1;
  coffset = kernelProduct->size[0] * kernelProduct->size[1];
  kernelProduct->size[1] = 16;
  emxEnsureCapacity_real_T1(kernelProduct, coffset);
  for (coffset = 0; coffset <= j; coffset++) {
    kernelProduct->data[coffset]++;
  }

  j = kernelProduct->size[0] * kernelProduct->size[1] - 1;
  coffset = kernelProduct->size[0] * kernelProduct->size[1];
  kernelProduct->size[1] = 16;
  emxEnsureCapacity_real_T1(kernelProduct, coffset);
  for (coffset = 0; coffset <= j; coffset++) {
    kernelProduct->data[coffset] *= kernelProduct->data[coffset];
  }
}

/* End of code generation (Poly.c) */
