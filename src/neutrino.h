# ifndef NEUTRINO_H
# define NEUTRINO_H

#include "particle.h"

class Neutrino : Particle{
    private:
        // e, mu, tau
        std::string flavour;

    public:
        Neutrino(char flavour){
            this->flavour = flavour;
        }
};





















#endif