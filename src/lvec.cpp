#include "lvec.h"
#include <sstream>
#include <cmath.h>

namespace math{
double math::sqrt(double x){
    return std::pow(x, 0.5);
}
}

double lvec::mag(){
    return math::sqrt(x[0] * x[0]) - ((x[1]*x[1]) + (x[2]*x[2]) + (x[3]*x[3]));
}

// this one returns it
double& lvec::operator[](size_t i){
    if (i > 3){
        std::cerr<<"Out of bounds";
        return x[0];
    }
    else{
        return x[i];
    }
}

const double& lvec::operator[](size_t i) const {
    if (i > 3){
        std::cerr<<"Out of bounds";
        return x[0];
    }
    else{
        return x[i];
    }
}

void lvec::stream(std::ostream& os) const{
    os << "{";
    for (size_t i=0; i<3; i++){
        os<<x[i]<<", ";
    }
    os<<x[3]<<"}";
}

void lvec::print(){
    std::cout<<"{";
    for (size_t i=0; i<3; i++){
        std::cout<<x[i]<<", ";
    }
    std::cout<<x[3]<<"}"<<std::endl;
}


void lvec::boost(double betax, double betay, double betaz){
    double beta = math::sqrt(betax*betax + betay*betay + betaz*betaz);
    double gamma = 1./math::sqrt(1. - beta**2);

    



}