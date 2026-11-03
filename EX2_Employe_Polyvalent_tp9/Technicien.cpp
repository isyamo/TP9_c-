#include "Technicien.hpp"
#include <iostream>

Technicien::Technicien(double salaire) : salaire(salaire) {}

void Technicien::afficherSalaire() const {
    std::cout << "Salaire de technicien : " << salaire << " DH " << std::endl;
}
