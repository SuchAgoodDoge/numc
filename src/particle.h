#include "4vec.h"

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
};
