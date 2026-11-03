#include "Hybride.hpp"

int main() {
    // Création d'un véhicule hybride (ex: Toyota Prius, 4.5 L/100km, 60 km d'autonomie électrique)
    Hybride maVoiture("Toyota", "Prius", 4.5, 60.0);

    // Test de l'affichage des caractéristiques
    maVoiture.afficherCaracteristiques();

    return 0;
}
