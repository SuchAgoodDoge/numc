#include "lvec.h"

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
      p = lvec(0, 0, 0, 0);
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
    double beta = math::sqrt(betax*betax + betay*betay + betaz*betaz);
    double gamma = 1./math::sqrt(1. - beta*beta);
  }
};
