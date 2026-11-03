#include "Moderateur.hpp"
#include <iostream>

Moderateur::Moderateur(int identifiant, const std::string& login, int niveauModeration)
    : Utilisateur(identifiant, login), niveauModeration(niveauModeration) {}

void Moderateur::modererContenu() const {
    std::cout << "[" << login << "] Modere le contenu avec le niveau : " << niveauModeration << std::endl;
}
