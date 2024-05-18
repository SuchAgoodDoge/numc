#include "lvec.h"
#include <sstream>


double lvec::mag(){
    return (x[0] * x[0]) - ((x[1]*x[1]) + (x[2]*x[2]) + (x[3]*x[3]));
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