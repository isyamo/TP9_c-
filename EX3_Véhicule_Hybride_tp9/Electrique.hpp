#ifndef ELECTRIQUE_HPP
#define ELECTRIQUE_HPP

#include "Vehicule.hpp"

// Héritage virtuel également
class Electrique : virtual public Vehicule {
protected:
    double autonomieBatterie; // en km

public:
    Electrique(const std::string& marque, const std::string& modele, double autonomieBatterie);
    virtual ~Electrique() = default;
};

#endif
