#ifndef SUPER_UTILISATEUR_HPP
#define SUPER_UTILISATEUR_HPP

#include "Administrateur.hpp"
#include "Moderateur.hpp"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int identifiant, const std::string& login, const std::string& droitsAcces, int niveauModeration);

    void afficherProfil() const;
};

#endif
