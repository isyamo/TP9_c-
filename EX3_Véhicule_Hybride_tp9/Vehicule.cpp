#include "Vehicule.hpp"
#include <iostream>

Vehicule::Vehicule(const std::string& marque, const std::string& modele)
    : marque(marque), modele(modele) {}

void Vehicule::afficher() const {
    std::cout << "Marque : " << marque << "\n"
              << "Modele : " << modele << std::endl;
}
