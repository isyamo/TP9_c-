#include "Personne.hpp"
#include <iostream>

Personne::Personne(const std::string& nom, const std::string& prenom)
    : nom(nom), prenom(prenom) {}

void Personne::afficher() const {
    std::cout << "Nom : " << nom << "\n"
              << "Prenom : " << prenom << std::endl;
}
