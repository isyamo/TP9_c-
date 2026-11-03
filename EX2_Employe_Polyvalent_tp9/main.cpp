#include "EmployePolyvalent.hpp"

int main() {
    // Création d'un employé polyvalent
    EmployePolyvalent employe(2200.0, 2500.0);

    // Affichage global via la méthode dédiée
    employe.afficherTousSalaires();

    return 0;
}
