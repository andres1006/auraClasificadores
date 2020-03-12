/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "Clasificador_EHM_vs_control.h"
#include "sort1.h"
#include "sortIdx.h"

/* Function Definitions */
void sort(double x[28], int idx[28])
{
  int i;
  double xwork[28];
  double x4[4];
  int nNaNs;
  signed char idx4[4];
  int ib;
  int k;
  signed char perm[4];
  int i2;
  int iwork[28];
  int i3;
  int i4;
  memset(&idx[0], 0, 28U * sizeof(int));
  for (i = 0; i < 4; i++) {
    x4[i] = 0.0;
    idx4[i] = 0;
  }

  memset(&xwork[0], 0, 28U * sizeof(double));
  nNaNs = 0;
  ib = 0;
  for (k = 0; k < 28; k++) {
    if (rtIsNaN(x[k])) {
      idx[27 - nNaNs] = k + 1;
      xwork[27 - nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = (signed char)(k + 1);
      x4[ib - 1] = x[k];
      if (ib == 4) {
        i = k - nNaNs;
        if (x4[0] <= x4[1]) {
          ib = 1;
          i2 = 2;
        } else {
          ib = 2;
          i2 = 1;
        }

        if (x4[2] <= x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        if (x4[ib - 1] <= x4[i3 - 1]) {
          if (x4[i2 - 1] <= x4[i3 - 1]) {
            perm[0] = (signed char)ib;
            perm[1] = (signed char)i2;
            perm[2] = (signed char)i3;
            perm[3] = (signed char)i4;
          } else if (x4[i2 - 1] <= x4[i4 - 1]) {
            perm[0] = (signed char)ib;
            perm[1] = (signed char)i3;
            perm[2] = (signed char)i2;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)ib;
            perm[1] = (signed char)i3;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)i2;
          }
        } else if (x4[ib - 1] <= x4[i4 - 1]) {
          if (x4[i2 - 1] <= x4[i4 - 1]) {
            perm[0] = (signed char)i3;
            perm[1] = (signed char)ib;
            perm[2] = (signed char)i2;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)i3;
            perm[1] = (signed char)ib;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)i2;
          }
        } else {
          perm[0] = (signed char)i3;
          perm[1] = (signed char)i4;
          perm[2] = (signed char)ib;
          perm[3] = (signed char)i2;
        }

        idx[i - 3] = idx4[perm[0] - 1];
        idx[i - 2] = idx4[perm[1] - 1];
        idx[i - 1] = idx4[perm[2] - 1];
        idx[i] = idx4[perm[3] - 1];
        x[i - 3] = x4[perm[0] - 1];
        x[i - 2] = x4[perm[1] - 1];
        x[i - 1] = x4[perm[2] - 1];
        x[i] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  if (ib > 0) {
    for (i = 0; i < 4; i++) {
      perm[i] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    for (k = 28; k - 27 <= ib; k++) {
      idx[(k - nNaNs) - ib] = idx4[perm[k - 28] - 1];
      x[(k - nNaNs) - ib] = x4[perm[k - 28] - 1];
    }
  }

  i = nNaNs >> 1;
  for (k = 1; k <= i; k++) {
    ib = idx[(k - nNaNs) + 27];
    idx[(k - nNaNs) + 27] = idx[28 - k];
    idx[28 - k] = ib;
    x[(k - nNaNs) + 27] = xwork[28 - k];
    x[28 - k] = xwork[(k - nNaNs) + 27];
  }

  if ((nNaNs & 1) != 0) {
    x[(i - nNaNs) + 28] = xwork[(i - nNaNs) + 28];
  }

  if (28 - nNaNs > 1) {
    memset(&iwork[0], 0, 28U * sizeof(int));
    i3 = (28 - nNaNs) >> 2;
    i2 = 4;
    while (i3 > 1) {
      if ((i3 & 1) != 0) {
        i3--;
        i = i2 * i3;
        ib = 28 - (nNaNs + i);
        if (ib > i2) {
          merge(idx, x, i, i2, ib - i2, iwork, xwork);
        }
      }

      i = i2 << 1;
      i3 >>= 1;
      for (k = 1; k <= i3; k++) {
        merge(idx, x, (k - 1) * i, i2, i2, iwork, xwork);
      }

      i2 = i;
    }

    if (28 - nNaNs > i2) {
      merge(idx, x, 0, i2, 28 - (nNaNs + i2), iwork, xwork);
    }
  }
}

/* End of code generation (sort1.c) */
