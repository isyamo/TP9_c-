#ifndef ADMINISTRATEUR_HPP
#define ADMINISTRATEUR_HPP

#include "Utilisateur.hpp"

// Héritage virtuel pour éviter le problème du diamant
class Administrateur : virtual public Utilisateur {
protected:
    std::string droitsAcces;

public:
    Administrateur(int identifiant, const std::string& login, const std::string& droitsAcces);
    virtual ~Administrateur() = default;

    void gererSysteme() const;
};

#endif
