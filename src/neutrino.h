# ifndef NEUTRINO_H
# define NEUTRINO_H

#include "particle.h"

class Neutrino : public Particle{
    private:
        // e, mu, tau
        std::string flavour;

    public:
        Neutrino(char flavour){
            this->flavour = flavour;
        }

        Neutrino(char flavour, lvec p4){
            this->flavour = flavour;
            this->set_momentum(p4);
        }
};





















#endif