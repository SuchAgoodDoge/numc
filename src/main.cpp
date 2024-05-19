#include <iostream>
//#include "particle.h"
#include "lvec.h"
#include "lmatrix.h"
#include "particle.h"

int main(){
  Particle e{0.511};
  e.p4().print();
  e.boost(0.9, 0.8, 0.7);
  e.p4().print();
  std::cout<<"\n"<<e.p4().mag()<<std::endl;
  return 0;
}
