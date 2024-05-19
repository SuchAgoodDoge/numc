#ifndef LMATRIX_H
#define LMATRIX_H
#endif

#include <iostream>


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

        double& operator()(size_t i, size_t j){
            if (i > 3 || j > 3){
                std::cerr<<"Out of bounds";
                return m[0][0];
            }
            else{
                return m[i][j];
            }
        }

};
