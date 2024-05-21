#ifndef CONSTANT_H
#define CONSTANT_H

/* 
I should move to root + PDG data types.
Could create my own custom struct that has values for NH, IH + uncertainties ;)
Would be fun...
*/

// PHYSICAL CONSTANTS
double c {2.99792458e8}; // m/s

// PMNS MATRIX PARAMS
// https://pdg.lbl.gov/index-2022.html
// dmsq in ev^2
double delta_M_21_sq {7.53e-5};
//double delta_M_13_sq {};
double delta_M_23_sq {2.453e-3}; // NH

double sin_sq_theta_12 {0.307};
double sin_sq_theta_13 {2.2e-2};
double sin_sq_theta_32 {0.539}; // NH

double delta_CP {1.36}; // pi rad



#endif