#include "Comptable.hpp"
#include <iostream>

Comptable::Comptable(double salaire) : salaire(salaire) {}

void Comptable::afficherSalaire() const {
    std::cout << "Salaire de comptable : " << salaire << " DH " << std::endl;
}
