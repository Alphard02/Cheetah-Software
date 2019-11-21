//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Jump2DConstraintJacobian.cpp
//
// MATLAB Coder version            : 3.2
// C/C++ source code generated on  : 26-Aug-2019 18:20:14
//

// Include Files
#include "rt_nonfinite.h"
#include "Jump2DBounds.h"
#include "Jump2DConstraintJacobian.h"
#include "Jump2DConstraintJacobianFinal.h"
#include "Jump2DConstraintJacobianFinalSP.h"
#include "Jump2DConstraintJacobianInitial.h"
#include "Jump2DConstraintJacobianInitialSP.h"
#include "Jump2DConstraintJacobianSP.h"
#include "Jump2DConstraints.h"
#include "Jump2DConstraintsFinal.h"
#include "Jump2DConstraintsInitial.h"
#include "Jump2DCost.h"
#include "Jump2DCostGradient.h"
#include "Jump2DInitialize.h"
#include "Jump2DLagrangianHessian.h"
#include "Jump2DLagrangianHessianFinal.h"
#include "Jump2DLagrangianHessianFinalSP.h"
#include "Jump2DLagrangianHessianInitial.h"
#include "Jump2DLagrangianHessianInitialSP.h"
#include "Jump2DLagrangianHessianSP.h"

// Function Definitions

//
// JUMP2DCONSTRAINTJACOBIAN
//     CONSTRAINT_JACOBIAN_NZ = JUMP2DCONSTRAINTJACOBIAN(IN1,DT,IN3,M,IYY,MU_G)
// Arguments    : const double in1[2]
//                double dt
//                const double in3[4]
//                double m
//                double Iyy
//                double mu_g
//                double constraint_jacobian_nz[35]
// Return Type  : void
//
void Jump2DConstraintJacobian(const double in1[2], double dt, const double in3[4],
  double m, double Iyy, double mu_g, double constraint_jacobian_nz[35])
{
  double t2;
  double t3;
  double t4;

  //     This function was generated by the Symbolic Math Toolbox version 7.1.
  //     26-Aug-2019 18:15:41
  t2 = dt * dt;
  t3 = 1.0 / m;
  t4 = 1.0 / Iyy;
  constraint_jacobian_nz[0] = -1.0;
  constraint_jacobian_nz[1] = -1.0;
  constraint_jacobian_nz[2] = -1.0;
  constraint_jacobian_nz[3] = -dt;
  constraint_jacobian_nz[4] = -1.0;
  constraint_jacobian_nz[5] = -dt;
  constraint_jacobian_nz[6] = -1.0;
  constraint_jacobian_nz[7] = -dt;
  constraint_jacobian_nz[8] = -1.0;
  constraint_jacobian_nz[9] = 1.0;
  constraint_jacobian_nz[10] = 1.0;
  constraint_jacobian_nz[11] = 1.0;
  constraint_jacobian_nz[12] = 1.0;
  constraint_jacobian_nz[13] = 1.0;
  constraint_jacobian_nz[14] = 1.0;
  constraint_jacobian_nz[15] = in1[0] * t2 * t3 * -0.5;
  constraint_jacobian_nz[16] = in3[1] * in1[0] * t2 * t4 * -0.5;
  constraint_jacobian_nz[17] = -dt * in1[0] * t3;
  constraint_jacobian_nz[18] = -dt * in3[1] * in1[0] * t4;
  constraint_jacobian_nz[19] = in1[0] * t2 * t3 * -0.5;
  constraint_jacobian_nz[20] = in3[0] * in1[0] * t2 * t4 * 0.5;
  constraint_jacobian_nz[21] = -dt * in1[0] * t3;
  constraint_jacobian_nz[22] = dt * in3[0] * in1[0] * t4;
  constraint_jacobian_nz[23] = -in1[0] * (mu_g - 1.0);
  constraint_jacobian_nz[24] = -in1[0] * (mu_g + 1.0);
  constraint_jacobian_nz[25] = in1[1] * t2 * t3 * -0.5;
  constraint_jacobian_nz[26] = in3[3] * in1[1] * t2 * t4 * -0.5;
  constraint_jacobian_nz[27] = -dt * in1[1] * t3;
  constraint_jacobian_nz[28] = -dt * in3[3] * in1[1] * t4;
  constraint_jacobian_nz[29] = in1[1] * t2 * t3 * -0.5;
  constraint_jacobian_nz[30] = in3[2] * in1[1] * t2 * t4 * 0.5;
  constraint_jacobian_nz[31] = -dt * in1[1] * t3;
  constraint_jacobian_nz[32] = dt * in3[2] * in1[1] * t4;
  constraint_jacobian_nz[33] = -in1[1] * (mu_g - 1.0);
  constraint_jacobian_nz[34] = -in1[1] * (mu_g + 1.0);
}

//
// File trailer for Jump2DConstraintJacobian.cpp
//
// [EOF]
//