#include "lvec.h"
#include <sstream>
#include <cmath>

// helper functions
namespace math{
    double sqrt(double x){
        return std::pow(x, 0.5);
    }
}

double lvec::mag(){
    return math::sqrt((x[0] * x[0]) - ((x[1]*x[1]) + (x[2]*x[2]) + (x[3]*x[3])));
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



// Need to check these!
// none of these are right! x0 should be energy!
// impliment 3vec momentum instead?
void lvec::rotate_x(double theta){
    double x0 = x[0];
    double x1 = x[1];
    double x2 = x[2];
    double x3 = x[3];

    x[0] = x0;
    x[1] = x1 * std::cos(theta) - x2 * std::sin(theta);
    x[2] = x1 * std::sin(theta) + x2 * std::cos(theta);
    x[3] = x3;
}

void lvec::rotate_y(double theta){
    double x0 = x[0];
    double x1 = x[1];
    double x2 = x[2];
    double x3 = x[3];

    x[0] = x0 * std::cos(theta) + x2 * std::sin(theta);
    x[1] = x1;
    x[2] = -x0 * std::sin(theta) + x2 * std::cos(theta);
    x[3] = x3;
}

void lvec::rotate_z(double theta){
    double x0 = x[0];
    double x1 = x[1];
    double x2 = x[2];
    double x3 = x[3];

    x[0] = x0 * std::cos(theta) - x1 * std::sin(theta);
    x[1] = x0 * std::sin(theta) + x1 * std::cos(theta);
    x[2] = x2;
    x[3] = x3;
}