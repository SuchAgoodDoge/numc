#include <iostream>
#include <random>
#include <cmath>
//#include "particle.h"
#include "lvec.h"
#include "lmatrix.h"
#include "particle.h"
#include "neutrino.h"
#include "constants.h"

const int SEED = 100;

// generate sensible neutrino mementum
void generate_neutrino_momentum(Neutrino n){
  // generate random energy
  // put it in pz
  // rotate to random direction
  // boost to lab frame


  // generate random energy
  std::mt19937 gen(SEED);
  std::uniform_real_distribution<> dis(0.0, 1.0);
  std::uniform_real_distribution<> dis2(-1., 1.);
  double energy = dis(gen) * 100.0;

  double theta {dis(gen) * 2.0 * pi};
  double phi {std::acos(dis2(gen))};

  // put it in pz
  lvec p4{energy, 0.0, 0.0, energy};

  // rotate to random direction
  p4.rotate_x(theta);
  p4.rotate_y(phi);
  // yeah this defo isnt right

}

int main(){
  /* dynamics tests
  Particle e{0.511};
  e.p4().print();
  e.boost(-0.9999, 0.0, 0.0);
  e.p4().print();
  std::cout<<"\n"<<e.p4().mag()<<std::endl;*/

  Neutrino n{'e', lvec{20., 0., 0.0, 20.0}};
  n.p4().print();
  n.boost(0.9999, 0.0, 0.0);
  n.p4().print();
  return 0;
}
