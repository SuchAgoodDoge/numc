#ifndef LMATRIX_H
#define LMATRIX_H

#include <iostream>
# include "lvec.h"

// Path: src/lmatrix.cpp

// lorentz matrix
class lmatrix {
    private:
        double m[4][4];
    public:
        lmatrix(){
            for (size_t i=0; i<4; i++){
                for (size_t j=0; j<4; j++){
                    m[i][j] = 0;
                }
            }
        }

        lmatrix(double m11, double m12, double m13, double m14,
                double m21, double m22, double m23, double m24,
                double m31, double m32, double m33, double m34,
                double m41, double m42, double m43, double m44);

        double& operator()(size_t i, size_t j){
            if (i > 3 || j > 3){
                std::cerr<<"Out of bounds";
                return m[0][0];
            }
            else{
                return m[i][j];
            }
        }

        lvec operator*(lvec v){
            lvec new_vec;
            for (size_t i=0; i<4; i++){
                for (size_t j=0; j<4; j++){
                    new_vec[i] += m[i][j] * v[j];
                }
            }
            return new_vec;
        }

};


#endif