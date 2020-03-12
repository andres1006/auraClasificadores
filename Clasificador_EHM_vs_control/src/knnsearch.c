/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * knnsearch.c
 *
 * Code generation for function 'knnsearch'
 *
 */

/* Include files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Clasificador_EHM_vs_control.h"
#include "knnsearch.h"
#include "Clasificador_EHM_vs_control_emxutil.h"
#include "sort1.h"
#include "eps.h"

/* Function Definitions */
void knnsearch(const double X[112], const emxArray_real_T *Y, emxArray_real_T
               *Idx, emxArray_real_T *D)
{
  int ny;
  int ii;
  emxArray_real_T *b_Y;
  int i;
  double b_X[112];
  int loop_ub;
  emxArray_real_T *Dout;
  emxArray_int32_T *IdxOut;
  double mincolnormX;
  double maxcolnormX;
  int j;
  double tempd;
  emxArray_real_T *colnorm;
  double scale;
  int px;
  double mincolnormY;
  double b_colnorm[28];
  double maxcolnormY;
  double absxk;
  double t;
  emxArray_boolean_T *logIndY;
  boolean_T logIndX[28];
  boolean_T nanflag;
  boolean_T exitg1;
  int iidx[28];
  ny = Y->size[0];
  for (ii = 0; ii < 28; ii++) {
    for (i = 0; i < 4; i++) {
      b_X[i + (ii << 2)] = X[ii + 28 * i];
    }
  }

  emxInit_real_T(&b_Y, 2);
  ii = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = 4;
  b_Y->size[1] = Y->size[0];
  emxEnsureCapacity_real_T1(b_Y, ii);
  loop_ub = Y->size[0];
  for (ii = 0; ii < loop_ub; ii++) {
    for (i = 0; i < 4; i++) {
      b_Y->data[i + b_Y->size[0] * ii] = Y->data[ii + Y->size[0] * i];
    }
  }

  emxInit_real_T(&Dout, 2);
  emxInit_int32_T(&IdxOut, 2);
  if (Y->size[0] == 0) {
    ii = Dout->size[0] * Dout->size[1];
    Dout->size[0] = 10;
    Dout->size[1] = 0;
    emxEnsureCapacity_real_T1(Dout, ii);
    ii = IdxOut->size[0] * IdxOut->size[1];
    IdxOut->size[0] = 10;
    IdxOut->size[1] = 0;
    emxEnsureCapacity_int32_T(IdxOut, ii);
  } else {
    ii = Dout->size[0] * Dout->size[1];
    Dout->size[0] = 10;
    Dout->size[1] = Y->size[0];
    emxEnsureCapacity_real_T1(Dout, ii);
    loop_ub = 10 * Y->size[0];
    for (ii = 0; ii < loop_ub; ii++) {
      Dout->data[ii] = 0.0;
    }

    ii = IdxOut->size[0] * IdxOut->size[1];
    IdxOut->size[0] = 10;
    IdxOut->size[1] = Y->size[0];
    emxEnsureCapacity_int32_T(IdxOut, ii);
    loop_ub = 10 * Y->size[0];
    for (ii = 0; ii < loop_ub; ii++) {
      IdxOut->data[ii] = 0;
    }

    mincolnormX = rtInf;
    maxcolnormX = 0.0;
    for (j = 0; j < 28; j++) {
      i = (j << 2) + 1;
      tempd = 0.0;
      scale = 3.3121686421112381E-170;
      for (loop_ub = i; loop_ub <= i + 3; loop_ub++) {
        absxk = fabs(b_X[loop_ub - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          tempd = 1.0 + tempd * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          tempd += t * t;
        }
      }

      tempd = scale * sqrt(tempd);
      b_colnorm[j] = tempd;
    }

    for (j = 0; j < 28; j++) {
      for (ii = 0; ii < 4; ii++) {
        b_X[ii + (j << 2)] /= b_colnorm[j];
      }

      if (b_colnorm[j] < mincolnormX) {
        mincolnormX = b_colnorm[j];
      } else {
        if (b_colnorm[j] > maxcolnormX) {
          maxcolnormX = b_colnorm[j];
        }
      }
    }

    emxInit_real_T1(&colnorm, 1);
    px = b_Y->size[1];
    mincolnormY = rtInf;
    maxcolnormY = 0.0;
    ii = colnorm->size[0];
    colnorm->size[0] = b_Y->size[1];
    emxEnsureCapacity_real_T(colnorm, ii);
    for (j = 0; j < px; j++) {
      i = (j << 2) + 1;
      tempd = 0.0;
      scale = 3.3121686421112381E-170;
      for (loop_ub = i; loop_ub <= i + 3; loop_ub++) {
        absxk = fabs(b_Y->data[loop_ub - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          tempd = 1.0 + tempd * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          tempd += t * t;
        }
      }

      tempd = scale * sqrt(tempd);
      colnorm->data[j] = tempd;
    }

    for (j = 0; j < px; j++) {
      tempd = colnorm->data[j];
      for (ii = 0; ii < 4; ii++) {
        b_Y->data[ii + b_Y->size[0] * j] /= tempd;
      }
    }

    for (ii = 0; ii < px; ii++) {
      if (colnorm->data[ii] < mincolnormY) {
        mincolnormY = colnorm->data[ii];
      } else {
        if (colnorm->data[ii] > maxcolnormY) {
          maxcolnormY = colnorm->data[ii];
        }
      }
    }

    emxFree_real_T(&colnorm);
    if (!(mincolnormX <= eps(maxcolnormX))) {
      eps(maxcolnormY);
    }

    for (ii = 0; ii < 28; ii++) {
      logIndX[ii] = true;
    }

    emxInit_boolean_T1(&logIndY, 2);
    ii = logIndY->size[0] * logIndY->size[1];
    logIndY->size[0] = 1;
    logIndY->size[1] = Y->size[0];
    emxEnsureCapacity_boolean_T1(logIndY, ii);
    loop_ub = Y->size[0];
    for (ii = 0; ii < loop_ub; ii++) {
      logIndY->data[ii] = true;
    }

    for (ii = 0; ii < ny; ii++) {
      nanflag = false;
      i = 1;
      exitg1 = false;
      while ((!exitg1) && (i < 5)) {
        if (rtIsNaN(b_Y->data[(i + b_Y->size[0] * ii) - 1])) {
          nanflag = true;
          exitg1 = true;
        } else {
          i++;
        }
      }

      if (nanflag) {
        logIndY->data[ii] = false;
      }
    }

    for (ii = 0; ii < 28; ii++) {
      nanflag = false;
      i = 1;
      exitg1 = false;
      while ((!exitg1) && (i < 5)) {
        if (rtIsNaN(b_X[(i + (ii << 2)) - 1])) {
          nanflag = true;
          exitg1 = true;
        } else {
          i++;
        }
      }

      if (nanflag) {
        logIndX[ii] = false;
      }
    }

    for (ii = 0; ii < ny; ii++) {
      for (i = 0; i < 28; i++) {
        b_colnorm[i] = rtNaN;
      }

      if (logIndY->data[ii]) {
        for (loop_ub = 0; loop_ub < 28; loop_ub++) {
          if (logIndX[loop_ub]) {
            tempd = 0.0;
            for (i = 0; i < 4; i++) {
              tempd += b_X[i + (loop_ub << 2)] * b_Y->data[i + b_Y->size[0] * ii];
              b_colnorm[loop_ub] = tempd;
            }

            if (b_colnorm[loop_ub] > 1.0) {
              b_colnorm[loop_ub] = 0.0;
            } else {
              b_colnorm[loop_ub] = 1.0 - b_colnorm[loop_ub];
            }
          }
        }
      }

      sort(b_colnorm, iidx);
      for (i = 0; i < 10; i++) {
        Dout->data[i + Dout->size[0] * ii] = b_colnorm[i];
        IdxOut->data[i + IdxOut->size[0] * ii] = iidx[i];
      }
    }

    emxFree_boolean_T(&logIndY);
  }

  emxFree_real_T(&b_Y);
  ii = D->size[0] * D->size[1];
  D->size[0] = Dout->size[1];
  D->size[1] = 10;
  emxEnsureCapacity_real_T1(D, ii);
  for (ii = 0; ii < 10; ii++) {
    loop_ub = Dout->size[1];
    for (i = 0; i < loop_ub; i++) {
      D->data[i + D->size[0] * ii] = Dout->data[ii + Dout->size[0] * i];
    }
  }

  emxFree_real_T(&Dout);
  ii = Idx->size[0] * Idx->size[1];
  Idx->size[0] = IdxOut->size[1];
  Idx->size[1] = 10;
  emxEnsureCapacity_real_T1(Idx, ii);
  for (ii = 0; ii < 10; ii++) {
    loop_ub = IdxOut->size[1];
    for (i = 0; i < loop_ub; i++) {
      Idx->data[i + Idx->size[0] * ii] = IdxOut->data[ii + IdxOut->size[0] * i];
    }
  }

  emxFree_int32_T(&IdxOut);
}

/* End of code generation (knnsearch.c) */
