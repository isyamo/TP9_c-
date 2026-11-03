#include "EnseignantChercheur.hpp"
#include <iostream>

EnseignantChercheur::EnseignantChercheur(const std::string& nom, const std::string& prenom, const std::string& domaineRecherche)
    : Personne(nom, prenom), Chercheur(domaineRecherche) {}

void EnseignantChercheur::afficher() const {
    std::cout << "--- Informations de l'Enseignant-Chercheur ---\n";
    Personne::afficher();
    Chercheur::afficher();
    std::cout << "---------------------------------------------" << std::endl;
}
