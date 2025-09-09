#include <stdio.h>
#include "decB.h"

int main(void)
{
    int choix;
    do
    {
        printf("------------------------\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre a jour la quantite d'un livre\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("6. Trier Tableau Par Quantite \n");
        printf("7. Recherche Par isbn\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouterLivre();
            break;
        case 2:
            afficherLivre();
            break;
        case 3:
            mjQuantite();
            break;
        case 4:
            suppLivre();
            break;
        case 5:
            totalLivre();
            break;
        case 6:
        {
            if (nbLivres == 0)
            {
                printf("\tAucun livre en stock.\n");
                return -1;
            }
            int choix2;
            printf("----------- \n");
            printf("1. Trier Tableau Par Quantite croissante (Petit ---> Grand)\n");
            printf("2. Trier Tableau Par Quantite decroissante (Grand ---> Petit)\n");
            printf("Votre choix : ");
            scanf("%d", &choix2);

            if (choix2 == 1)
            {
                trierParQuantite(choix2);
                printf("Livre trie Par Quantite croissante \n");
            }
            else if (choix2 == 2)
            {
                trierParQuantite(choix2);
                printf("Livre trie Par Quantite Decroissante \n");
            }
            else
            {
                printf("Choix invalide.\n");
            }
        }
        break;
        case 7:
            rechBinaireISBN();
            break;
        case 0:
            printf("Au revoir \n");
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}