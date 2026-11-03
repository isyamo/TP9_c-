#include "Thermique.hpp"

Thermique::Thermique(const std::string& marque, const std::string& modele, double consommationCarburant)
    : Vehicule(marque, modele), consommationCarburant(consommationCarburant) {}
