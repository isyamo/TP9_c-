#include "Electrique.hpp"

Electrique::Electrique(const std::string& marque, const std::string& modele, double autonomieBatterie)
    : Vehicule(marque, modele), autonomieBatterie(autonomieBatterie) {}
