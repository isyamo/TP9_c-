#ifndef MODERATEUR_HPP
#define MODERATEUR_HPP

#include "Utilisateur.hpp"

// Héritage virtuel également
class Moderateur : virtual public Utilisateur {
protected:
    int niveauModeration;

public:
    Moderateur(int identifiant, const std::string& login, int niveauModeration);
    virtual ~Moderateur() = default;

    void modererContenu() const;
};

#endif
