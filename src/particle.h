#include "4vec.h"

// could be a virtual class
class Particle{
  protected:
    double m;
    4vev p;
    4vec x;

  public:
    Particle Particle(double m;){
      this->m = m;
      p = {m, 0, 0, 0};
      x = {0, 0, 0, 0};
    }

    void set_momentum(4vec p){
      this->p = p;
    }
    
    4vec p4(){
      return p;
    }

    4vec x4(){
      return x;
    }

    ~Particle(){};
}
