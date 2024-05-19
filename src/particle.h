#ifndef PARTICLE_H
#define PARTICLE_H


#include "lvec.h"
#include "lmatrix.h"

// could be a virtual class
class Particle{
  protected:
    double m;
    lvec p;
    lvec x;

  public:
    Particle(){
      m = 0;
      p = lvec(0, 0, 0, 0);
      x = lvec(0, 0, 0, 0);
    }
    Particle(double m){
      this->m = m;
      p = lvec(m, 0, 0, 0);
      x = lvec(0, 0, 0, 0);
    }

    void set_momentum(lvec p){
      this->p = p;
    }
    
    lvec p4(){
      return p;
    }

    lvec x4(){
      return x;
    }

    ~Particle(){};


  // ideally want a few overloads of this
  // 1) takes particle -> boosts to frame of particle
  // 2) betax betay betaz
  // Do i want this as a matrix * vector operation instead??????
  void boost(double betax, double betay, double betaz){
    // setup matrix for boost
    double beta = math::sqrt(betax*betax + betay*betay + betaz*betaz);
    double gamma = 1./math::sqrt(1. - beta*beta);

    double m11 = gamma;
    double m12 = -gamma*betax;
    double m13 = -gamma*betay;
    double m14 = -gamma*betaz;

    double m21 = -gamma*betax;
    double m22 = 1 + (gamma - 1)*betax*betax/(beta*beta);
    double m23 = (gamma - 1)*betax*betay/(beta*beta);
    double m24 = (gamma - 1)*betax*betaz/(beta*beta);

    double m31 = -gamma*betay;
    double m32 = (gamma - 1)*betay*betax/(beta*beta);
    double m33 = 1 + (gamma - 1)*betay*betay/(beta*beta);
    double m34 = (gamma - 1)*betay*betaz/(beta*beta);

    double m41 = -gamma*betaz;
    double m42 = (gamma - 1)*betaz*betax/(beta*beta);
    double m43 = (gamma - 1)*betaz*betay/(beta*beta);
    double m44 = 1 + (gamma - 1)*betaz*betaz/(beta*beta);

    lmatrix boost_matrix(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    
    // boost the particle
    x = boost_matrix * x;
    p = boost_matrix * p;
  }
};


#endif