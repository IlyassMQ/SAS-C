#include <stdio.h>
#include "decB.h"

int main() {
    int choix;
    do {
        printf("------------------------\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre a jour la quantite d'un livre\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterLivre(); 
            break;
            case 2: afficherLivre(); 
            break;
            case 3: mjQuantite(); 
            break;
            case 4: suppLivre(); 
            break;
            case 5: totalLivre(); 
            break;
            case 0: printf("Au revoir \n"); 
            break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}