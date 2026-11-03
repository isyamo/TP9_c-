#include "Administrateur.hpp"
#include <iostream>

Administrateur::Administrateur(int identifiant, const std::string& login, const std::string& droitsAcces)
    : Utilisateur(identifiant, login), droitsAcces(droitsAcces) {}

void Administrateur::gererSysteme() const {
    std::cout << "[" << login << "] Gere le systeme avec les droits d'acces : " << droitsAcces << std::endl;
}
