#include "Utilisateur.hpp"
#include <iostream>

Utilisateur::Utilisateur(int identifiant, const std::string& login)
    : identifiant(identifiant), login(login) {}

void Utilisateur::afficher() const {
    std::cout << "Identifiant : " << identifiant << "\n"
              << "Login       : " << login << std::endl;
}
