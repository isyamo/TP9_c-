#ifndef THERMIQUE_HPP
#define THERMIQUE_HPP

#include "Vehicule.hpp"

// Héritage virtuel pour éviter la duplication en cas d'héritage multiple
class Thermique : virtual public Vehicule {
protected:
    double consommationCarburant; // en L/100km

public:
    Thermique(const std::string& marque, const std::string& modele, double consommationCarburant);
    virtual ~Thermique() = default;
};

#endif
