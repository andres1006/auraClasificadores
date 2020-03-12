/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_EHM_vs_control.c
 *
 * Code generation for function 'Clasificador_EHM_vs_control'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "Clasificador_EHM_vs_control.h"
#include "Clasificador_EHM_vs_control_emxutil.h"
#include "ClassificationKNN.h"

/* Function Definitions */
void Clasificador_EHM_vs_control(const emxArray_real_T *x, emxArray_real_T
  *label)
{
  double Mdl_X[112];
  static const double dv0[112] = { 0.62893506629816787, 0.33543203535902266,
    1.8029471900547485, 1.5094441591156034, 1.8029471900547485,
    0.041929004419877472, 0.92243809723731307, 2.0964502209938938,
    -0.838580088397558, -0.25157402651926769, -0.25157402651926769,
    -0.838580088397558, 2.0964502209938938, -0.54507705745841284,
    -0.838580088397558, -0.25157402651926769, -0.25157402651926769,
    -0.838580088397558, -0.25157402651926769, -0.54507705745841284,
    -0.25157402651926769, -0.838580088397558, -0.25157402651926769,
    -0.838580088397558, -0.838580088397558, -0.838580088397558,
    -0.838580088397558, -0.838580088397558, 0.6289350771981802,
    0.33543202238816877, 1.8029471907771359, 1.5094441711874882,
    1.8029471907771359, 0.04192900279852077, 0.92243809678782829,
    2.0964502103667835, -0.83858009119078669, -0.25157401679112712,
    -0.25157401679112712, -0.83858009119078669, 2.0964502103667835,
    -0.54507707160113883, -0.83858009119078669, -0.25157401679112712,
    -0.25157401679112712, -0.83858009119078669, -0.25157401679112712,
    -0.54507707160113883, -0.25157401679112712, -0.83858009119078669,
    -0.25157401679112712, -0.83858009119078669, -0.83858009119078669,
    -0.83858009119078669, -0.83858009119078669, -0.83858009119078669,
    1.1243786044526309, 0.10881083268896383, 2.6477302620981318,
    0.6165947185707974, 1.6321624903344645, 0.6165947185707974,
    0.10881083268896383, 2.1399463762162982, 0.6165947185707974,
    0.10881083268896383, 0.10881083268896383, -0.90675693907470323,
    0.6165947185707974, -0.90675693907470323, -0.90675693907470323,
    -0.90675693907470323, -0.39897305319286969, -0.90675693907470323,
    -0.90675693907470323, -0.90675693907470323, -0.39897305319286969,
    -0.39897305319286969, 0.10881083268896383, -0.90675693907470323,
    -0.90675693907470323, -0.90675693907470323, -0.90675693907470323,
    0.6165947185707974, 1.1243786044526307, 0.10881083268896381,
    2.6477302620981309, 0.61659471857079728, 1.6321624903344643,
    0.61659471857079728, 0.10881083268896381, 2.1399463762162978,
    0.61659471857079728, 0.10881083268896381, 0.10881083268896381,
    -0.90675693907470312, 0.61659471857079728, -0.90675693907470312,
    -0.90675693907470312, -0.90675693907470312, -0.39897305319286963,
    -0.90675693907470312, -0.90675693907470312, -0.90675693907470312,
    -0.39897305319286963, -0.39897305319286963, 0.10881083268896381,
    -0.90675693907470312, -0.90675693907470312, -0.90675693907470312,
    -0.90675693907470312, 0.61659471857079728 };

  int i;
  int szc;
  unsigned int Mdl_YIdx[28];
  static const signed char iv0[28] = { 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

  int k;
  double Mdl_Mu[4];
  static const double dv1[4] = { 2.8571428571428585, 23.809523857142867,
    1.7857142857142867, 22.321428571428584 };

  double Mdl_Sigma[4];
  static const double dv2[4] = { 3.4071198406374879, 28.392665300857857,
    1.9693417373089113, 24.616771716361395 };

  signed char I[4];
  signed char cost[4];
  emxArray_real_T *Xin;
  signed char Mdl_Cost[4];
  emxArray_real_T *a;
  int coffset;
  emxArray_real_T *posteriors;
  emxArray_boolean_T *nonnanscoreindices;
  emxArray_real_T *b_cost;
  int m;
  emxArray_real_T *classnum;
  int boffset;
  int aoffset;

  /* PREDICTLABELSSVM Label new observations using trained SVM model Mdl */
  /*    predictLabelsSVM predicts the vector of labels label using  */
  /*    the saved SVM model Mdl and the predictor data x. */
  memcpy(&Mdl_X[0], &dv0[0], 112U * sizeof(double));
  for (i = 0; i < 28; i++) {
    Mdl_YIdx[i] = (unsigned int)iv0[i];
  }

  for (szc = 0; szc < 4; szc++) {
    Mdl_Mu[szc] = dv1[szc];
    Mdl_Sigma[szc] = dv2[szc];
    I[szc] = 0;
  }

  for (k = 0; k < 2; k++) {
    I[k + (k << 1)] = 1;
  }

  for (szc = 0; szc < 4; szc++) {
    cost[szc] = (signed char)(1 - I[szc]);
    Mdl_Cost[szc] = (signed char)(1 - I[szc]);
  }

  if (x->size[0] == 0) {
    szc = label->size[0];
    label->size[0] = 0;
    emxEnsureCapacity_real_T(label, szc);
  } else {
    emxInit_real_T(&Xin, 2);
    i = x->size[0];
    szc = Xin->size[0] * Xin->size[1];
    Xin->size[0] = i;
    Xin->size[1] = 4;
    emxEnsureCapacity_real_T1(Xin, szc);
    i = (x->size[0] != 1);
    for (k = 0; k < 4; k++) {
      szc = Xin->size[0];
      for (coffset = 0; coffset < szc; coffset++) {
        Xin->data[coffset + Xin->size[0] * k] = x->data[i * coffset + x->size[0]
          * k] - Mdl_Mu[k];
      }
    }

    emxInit_real_T(&a, 2);
    szc = a->size[0] * a->size[1];
    a->size[0] = Xin->size[0];
    a->size[1] = 4;
    emxEnsureCapacity_real_T1(a, szc);
    i = Xin->size[0] * Xin->size[1];
    for (szc = 0; szc < i; szc++) {
      a->data[szc] = Xin->data[szc];
    }

    i = Xin->size[0];
    szc = Xin->size[0] * Xin->size[1];
    Xin->size[0] = i;
    Xin->size[1] = 4;
    emxEnsureCapacity_real_T1(Xin, szc);
    for (k = 0; k < 4; k++) {
      szc = Xin->size[0];
      i = (a->size[0] != 1);
      for (coffset = 0; coffset < szc; coffset++) {
        Xin->data[coffset + Xin->size[0] * k] = a->data[i * coffset + a->size[0]
          * k] / Mdl_Sigma[k];
      }
    }

    emxFree_real_T(&a);
    emxInit_real_T(&posteriors, 2);
    emxInit_boolean_T(&nonnanscoreindices, 1);
    emxInit_real_T(&b_cost, 2);
    ClassificationKNN_score(Mdl_X, Mdl_YIdx, Xin, posteriors, nonnanscoreindices);
    m = posteriors->size[0];
    szc = b_cost->size[0] * b_cost->size[1];
    b_cost->size[0] = posteriors->size[0];
    b_cost->size[1] = 2;
    emxEnsureCapacity_real_T1(b_cost, szc);
    emxFree_real_T(&Xin);
    for (szc = 0; szc < 2; szc++) {
      coffset = szc * m - 1;
      boffset = szc << 1;
      for (i = 1; i <= m; i++) {
        b_cost->data[coffset + i] = 0.0;
      }

      for (k = 0; k < 2; k++) {
        if (Mdl_Cost[boffset + k] != 0) {
          aoffset = k * m;
          for (i = 1; i <= m; i++) {
            b_cost->data[coffset + i] += (double)cost[boffset + k] *
              posteriors->data[(aoffset + i) - 1];
          }
        }
      }
    }

    emxInit_real_T1(&classnum, 1);
    szc = classnum->size[0];
    classnum->size[0] = posteriors->size[0];
    emxEnsureCapacity_real_T(classnum, szc);
    for (i = 0; i < nonnanscoreindices->size[0]; i++) {
      if (nonnanscoreindices->data[i]) {
        if ((b_cost->data[i] > b_cost->data[i + b_cost->size[0]]) || (rtIsNaN
             (b_cost->data[i]) && (!rtIsNaN(b_cost->data[i + b_cost->size[0]]))))
        {
          szc = 2;
        } else {
          szc = 1;
        }

        classnum->data[i] = szc;
      }
    }

    emxFree_real_T(&b_cost);
    i = posteriors->size[0];
    szc = label->size[0];
    label->size[0] = i;
    emxEnsureCapacity_real_T(label, szc);
    emxFree_real_T(&posteriors);
    for (szc = 0; szc < i; szc++) {
      label->data[szc] = 8.0;
    }

    for (i = 0; i < nonnanscoreindices->size[0]; i++) {
      if (nonnanscoreindices->data[i]) {
        label->data[i] = (signed char)(1 + (signed char)(7 * (signed char)((int)
          classnum->data[i] - 1)));
      }
    }

    emxFree_real_T(&classnum);
    emxFree_boolean_T(&nonnanscoreindices);
  }
}

/* End of code generation (Clasificador_EHM_vs_control.c) */
