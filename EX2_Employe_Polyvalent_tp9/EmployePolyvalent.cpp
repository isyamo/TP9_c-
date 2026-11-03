#include "EmployePolyvalent.hpp"
#include <iostream>

EmployePolyvalent::EmployePolyvalent(double salaireTech, double salaireComp)
    : Technicien(salaireTech), Comptable(salaireComp) {}

void EmployePolyvalent::afficherTousSalaires() const {
    std::cout << "--- Bilan Salarial de l'Employe Polyvalent ---\n";

    // Résolution de l'ambiguïté en utilisant l'opérateur de résolution de portée (::)
    Technicien::afficherSalaire();
    Comptable::afficherSalaire();

    std::cout << "----------------------------------------------\n";
}
