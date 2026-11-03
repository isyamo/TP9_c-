#ifndef EMPLOYE_POLYVALENT_HPP
#define EMPLOYE_POLYVALENT_HPP

#include "Technicien.hpp"
#include "Comptable.hpp"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    // Constructeur initialisant les deux sous-objets parents
    EmployePolyvalent(double salaireTech, double salaireComp);

    // Méthode spécifique pour afficher tous les salaires
    void afficherTousSalaires() const;
};

#endif
