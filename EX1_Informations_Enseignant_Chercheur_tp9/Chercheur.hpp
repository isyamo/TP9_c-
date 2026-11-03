#ifndef CHERCHEUR_HPP
#define CHERCHEUR_HPP

#include <string>

class Chercheur {
protected:
    std::string domaineRecherche;

public:
    explicit Chercheur(const std::string& domaineRecherche);
    virtual ~Chercheur() = default;

    virtual void afficher() const;
};

#endif
