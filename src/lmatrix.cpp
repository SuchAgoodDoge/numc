#include "lmatrix.h"

lmatrix::lmatrix(double m11, double m12, double m13, double m14,
                 double m21, double m22, double m23, double m24,
                 double m31, double m32, double m33, double m34,
                 double m41, double m42, double m43, double m44){
    m[0][0] = m11;
    m[0][1] = m12;
    m[0][2] = m13;
    m[0][3] = m14;

    m[1][0] = m21;
    m[1][1] = m22;
    m[1][2] = m23;
    m[1][3] = m24;

    m[2][0] = m31;
    m[2][1] = m32;
    m[2][2] = m33;
    m[2][3] = m34;

    m[3][0] = m41;
    m[3][1] = m42;
    m[3][2] = m43;
    m[3][3] = m44;
}
