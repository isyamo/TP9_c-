#include "Chercheur.hpp"
#include <iostream>

Chercheur::Chercheur(const std::string& domaineRecherche)
    : domaineRecherche(domaineRecherche) {}

void Chercheur::afficher() const {
    std::cout << "Domaine de recherche : " << domaineRecherche << std::endl;
}
