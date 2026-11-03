#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>

class Utilisateur {
protected:
    int identifiant;
    std::string login;

public:
    Utilisateur(int identifiant, const std::string& login);
    virtual ~Utilisateur() = default;

    virtual void afficher() const;
};

#endif
