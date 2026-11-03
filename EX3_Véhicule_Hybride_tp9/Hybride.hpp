#ifndef HYBRIDE_HPP
#define HYBRIDE_HPP

#include "Thermique.hpp"
#include "Electrique.hpp"

class Hybride : public Thermique, public Electrique {
public:
    Hybride(const std::string& marque, const std::string& modele, double consommationCarburant, double autonomieBatterie);

    void afficherCaracteristiques() const;
};

#endif
