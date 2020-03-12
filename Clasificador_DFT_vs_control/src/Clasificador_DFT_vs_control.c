/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_DFT_vs_control.c
 *
 * Code generation for function 'Clasificador_DFT_vs_control'
 *
 */

/* Include files */
#include <math.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "Clasificador_DFT_vs_control.h"
#include "Clasificador_DFT_vs_control_emxutil.h"
#include "CompactClassificationSVM.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

void Clasificador_DFT_vs_control(const emxArray_real_T *x, emxArray_real_T
  *label)
{
  int iy;
  double Mdl_Alpha[10];
  static const double dv0[10] = { -1.0, -1.0, -0.025087697628158104, -1.0, -1.0,
    1.0, 1.0, 1.0, 0.025087697628158104, 1.0 };

  double Mdl_ClassNames[2];
  double Mdl_NonzeroProbClasses[2];
  emxArray_real_T *scores;
  emxArray_boolean_T *b;
  int vstride;
  emxArray_boolean_T *notNaN;
  unsigned int outsize[2];
  int i1;
  int i2;
  int j;
  int ix;
  boolean_T exitg1;
  emxArray_real_T *classnum;

  /* PREDICTLABELSSVM Label new observations using trained SVM model Mdl */
  /*    predictLabelsSVM predicts the vector of labels label using  */
  /*    the saved SVM model Mdl and the predictor data x. */
  for (iy = 0; iy < 2; iy++) {
    Mdl_ClassNames[iy] = 1.0 + 4.0 * (double)iy;
    Mdl_NonzeroProbClasses[iy] = 1.0 + 4.0 * (double)iy;
  }

  memcpy(&Mdl_Alpha[0], &dv0[0], 10U * sizeof(double));
  if (x->size[0] == 0) {
    iy = label->size[0];
    label->size[0] = 0;
    emxEnsureCapacity_real_T(label, iy);
  } else {
    emxInit_real_T(&scores, 2);
    emxInit_boolean_T1(&b, 2);
    CompactClassificationSVM_score(Mdl_Alpha, Mdl_ClassNames,
      Mdl_NonzeroProbClasses, x, scores);
    iy = b->size[0] * b->size[1];
    b->size[0] = scores->size[0];
    b->size[1] = 2;
    emxEnsureCapacity_boolean_T(b, iy);
    vstride = scores->size[0] * scores->size[1];
    for (iy = 0; iy < vstride; iy++) {
      b->data[iy] = rtIsNaN(scores->data[iy]);
    }

    for (iy = 0; iy < 2; iy++) {
      outsize[iy] = (unsigned int)b->size[iy];
    }

    emxInit_boolean_T(&notNaN, 1);
    iy = notNaN->size[0];
    notNaN->size[0] = (int)outsize[0];
    emxEnsureCapacity_boolean_T1(notNaN, iy);
    vstride = (int)outsize[0];
    for (iy = 0; iy < vstride; iy++) {
      notNaN->data[iy] = true;
    }

    vstride = b->size[0];
    iy = -1;
    i1 = 0;
    i2 = b->size[0];
    for (j = 1; j <= vstride; j++) {
      i1++;
      i2++;
      iy++;
      ix = i1;
      exitg1 = false;
      while ((!exitg1) && (ix <= i2)) {
        if (!b->data[ix - 1]) {
          notNaN->data[iy] = false;
          exitg1 = true;
        } else {
          ix += vstride;
        }
      }
    }

    emxFree_boolean_T(&b);
    iy = notNaN->size[0];
    emxEnsureCapacity_boolean_T1(notNaN, iy);
    vstride = notNaN->size[0];
    for (iy = 0; iy < vstride; iy++) {
      notNaN->data[iy] = !notNaN->data[iy];
    }

    emxInit_real_T1(&classnum, 1);
    iy = classnum->size[0];
    classnum->size[0] = scores->size[0];
    emxEnsureCapacity_real_T(classnum, iy);
    vstride = scores->size[0];
    for (iy = 0; iy < vstride; iy++) {
      classnum->data[iy] = rtNaN;
    }

    for (vstride = 0; vstride < notNaN->size[0]; vstride++) {
      if (notNaN->data[vstride]) {
        if ((scores->data[vstride] < scores->data[vstride + scores->size[0]]) ||
            (rtIsNaN(scores->data[vstride]) && (!rtIsNaN(scores->data[vstride +
               scores->size[0]])))) {
          iy = 2;
        } else {
          iy = 1;
        }

        classnum->data[vstride] = iy;
      }
    }

    vstride = scores->size[0];
    iy = label->size[0];
    label->size[0] = vstride;
    emxEnsureCapacity_real_T(label, iy);
    emxFree_real_T(&scores);
    for (iy = 0; iy < vstride; iy++) {
      label->data[iy] = 5.0;
    }

    for (vstride = 0; vstride < notNaN->size[0]; vstride++) {
      if (notNaN->data[vstride]) {
        label->data[vstride] = (signed char)(1 + (signed char)((signed char)
          ((int)(unsigned int)rt_roundd_snf(classnum->data[vstride]) - 1) << 2));
      }
    }

    emxFree_real_T(&classnum);
    emxFree_boolean_T(&notNaN);
  }
}

/* End of code generation (Clasificador_DFT_vs_control.c) */
