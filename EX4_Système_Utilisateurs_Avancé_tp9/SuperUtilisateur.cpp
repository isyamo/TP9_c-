#include "SuperUtilisateur.hpp"
#include <iostream>

// Grâce à l'héritage virtuel, c'est la classe la plus dérivée (SuperUtilisateur)
// qui initialise directement la classe de base commune (Utilisateur).
SuperUtilisateur::SuperUtilisateur(int identifiant, const std::string& login, const std::string& droitsAcces, int niveauModeration)
    : Utilisateur(identifiant, login),
      Administrateur(identifiant, login, droitsAcces),
      Moderateur(identifiant, login, niveauModeration) {}

void SuperUtilisateur::afficherProfil() const {
    std::cout << "\n========================================\n";
    std::cout << "       PROFIL DU SUPER UTILISATEUR      \n";
    std::cout << "========================================\n";

    // Pas d'ambiguïté pour appeler afficher() grâce à l'unicité de l'objet Utilisateur
    Utilisateur::afficher();

    std::cout << "Droits d'acces (Admin)     : " << droitsAcces << "\n"
              << "Niveau de moderation (Modo) : " << niveauModeration << "\n";
    std::cout << "========================================\n";
}
