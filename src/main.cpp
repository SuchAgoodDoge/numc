#include <iostream>
//#include "particle.h"
#include "lvec.h"


int main(){
  //Particle e{511};
  lvec x{1,2,3,4};
  std::cout<<x[0]<<std::endl;
  x[1] = 2.5;
  x.print();
  return 0;
}
