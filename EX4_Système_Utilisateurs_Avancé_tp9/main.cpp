#include <iostream>
#include <limits>
#include "SuperUtilisateur.hpp"

void afficherMenu() {
    std::cout << "\n=== MENU INTERACTIF : SYSTEME UTILISATEUR ===\n"
              << "1. Tester un Super Utilisateur par defaut\n"
              << "2. Creer et tester un Super Utilisateur personnalise\n"
              << "3. Quitter\n"
              << "Votre choix : ";
}

int main() {
    int choix;

    do {
        afficherMenu();
        if (!(std::cin >> choix)) {
            std::cout << "Erreur de saisie. Veuillez entrer un nombre.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choix) {
            case 1: {
                // Création d'un profil par défaut
                SuperUtilisateur defaultUser(1, "root_master", "ROOT_ALL", 10);
                defaultUser.afficherProfil();

                std::cout << "\n[Tests des methodes specifiques] :\n";
                defaultUser.gererSysteme();
                defaultUser.modererContenu();
                break;
            }
            case 2: {
                int id, niveau;
                std::string login, droits;

                std::cout << "Entrez l'identifiant (entier) : ";
                std::cin >> id;
                std::cout << "Entrez le login (chaine) : ";
                std::cin >> droits; // petite sécurité pour vider ou lire proprement si besoin, mais standard std::cin >> suffit ici
                // Reprise propre :
                std::cin >> login;
                std::cout << "Entrez les droits d'acces : ";
                std::cin >> droits;
                std::cout << "Entrez le niveau de moderation (entier) : ";
                std::cin >> niveau;

                SuperUtilisateur customUser(id, login, droits, niveau);
                customUser.afficherProfil();

                std::cout << "\n[Tests des methodes specifiques] :\n";
                customUser.gererSysteme();
                customUser.modererContenu();
                break;
            }
            case 3:
                std::cout << "Fermeture du programme...\n";
                break;
            default:
                std::cout << "Choix invalide. Reesayez.\n";
        }

    } while (choix != 3);

    return 0;
}
