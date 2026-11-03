#include "Hybride.hpp"
#include <iostream>

// Règle de l'héritage virtuel : la classe la plus dérivée (Hybride) doit initialiser directement
// la classe de base virtuelle (Vehicule).
Hybride::Hybride(const std::string& marque, const std::string& modele, double consommationCarburant, double autonomieBatterie)
    : Vehicule(marque, modele),
      Thermique(marque, modele, consommationCarburant),
      Electrique(marque, modele, autonomieBatterie) {}

void Hybride::afficherCaracteristiques() const {
    std::cout << "--- Caracteristiques du Vehicule Hybride ---\n";
    Vehicule::afficher(); // Pas d'ambiguïté grâce à l'héritage virtuel (une seule instance de Vehicule existe)
    std::cout << "Consommation (Carburant) : " << consommationCarburant << " L/100km\n"
              << "Autonomie (Batterie)    : " << autonomieBatterie << " km\n"
              << "--------------------------------------------" << std::endl;
}
