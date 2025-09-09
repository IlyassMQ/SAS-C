#include <stdio.h>
#include <string.h>
#include "decB.h"

int nbLivres = 0;

void ajouterLivre()
{

    printf("Titre : ");
    scanf(" %[^\n]", Livres[nbLivres].titres);
    printf("Auteur : ");
    scanf(" %[^\n]", Livres[nbLivres].auteurs);
    printf("Prix : ");
    scanf("%f", &Livres[nbLivres].prix);
    printf("Quantite : ");
    scanf("%d", &Livres[nbLivres].quantite);
    printf("ISBN : ");
    scanf("%s", Livres[nbLivres].isbn);
    nbLivres++;
    printf("Livre ajoute avec succes.\n");
}

void afficherLivre()
{
    if (nbLivres == 0)
    {
        printf("\t Aucun livre en stock.\n");
        return;
    }
    printf("\t Liste des Livres \n");
    for (int i = 0; i < nbLivres; i++)
    {
        printf("%d. Titre : %s | Auteur: %s | Prix : %.2f $ | ISBN : %s | Quantite %d \n",
               i + 1, Livres[i].titres, Livres[i].auteurs, Livres[i].prix, Livres[i].isbn, Livres[i].quantite);
    }
}

void mjQuantite()
{
    char titre[MAX_LEN];
    int nouvelleQt;

    if (nbLivres == 0)
    {
        printf("\tAucun livr en stock a modifier\n");
        return;
    }

    printf("Titre du livre a modifier : ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < nbLivres; i++)
    {
        if (strcasecmp(Livres[i].titres, titre) == 0)
        {
            printf("Nouvelle quantite: ");
            scanf("%d", &nouvelleQt);
            Livres[i].quantite = nouvelleQt;
            printf("Quantite mise a jour\n");
            return;
        }
    }
    printf("Livre non trouve\n");
}

void trierParQuantite(int ordre)
{
    if (nbLivres == 0)
    {
        printf("\tAucun livre en stock.\n");
        return;
    }
    for (int i = 0; i < nbLivres - 1; i++)
    {
        for (int j = 0; j < nbLivres - i - 1; j++)
        {
            if ((ordre == 1 && Livres[j].quantite > Livres[j + 1].quantite) || // croissant
                (ordre == 2 && Livres[j].quantite < Livres[j + 1].quantite)) // décroissant
            { 

                Livre tmp = Livres[j];
                Livres[j] = Livres[j + 1];
                Livres[j + 1] = tmp;
            }
        }
    }
}

// void trierParIsbn() {

//     for (int i = 0; i < nbLivres - 1; i++) {
//         for (int j = 0; j < nbLivres - 1; j++) {
//             if (strcasecmp(Livres[j].isbn, Livres[j+1].isbn) > 0) {
//                 Livre m = Livres[j];
//                 Livres[j] = Livres[j+1];
//                 Livres[j+1] = m;
//             }
//         }
//     }
// }

int rechBinaireISBN()
{

    int inf = 0;
    int sup = nbLivres - 1;
    char isbnE[25];

    if (nbLivres == 0)
    {
        printf("\tAucun livre en stock.\n");
        return -1;
    }

    printf("Entrer ISBN a rechercher : ");

    scanf(" %[^\n]", isbnE);

    while (inf <= sup)
    {
        int mill = (inf + sup) / 2;

        int cmp = strcasecmp(Livres[mill].isbn, isbnE);

        if (cmp == 0)
        {
            printf("Livre trouve :\n");
            printf("%d. Titre : %s | Auteur : %s | Prix : %.2f $ | ISBN : %s | Quantite : %d \n",
                   mill + 1, Livres[mill].titres, Livres[mill].auteurs,
                   Livres[mill].prix, Livres[mill].isbn, Livres[mill].quantite);
            return mill;
        }
        else if (cmp < 0)
        {
            inf = mill + 1;
        }
        else
        {
            sup = mill - 1;
        }
    }

    printf("ISBN non trouvé.\n");
    return -1;
}

void suppLivre()
{
    char titre[MAX_LEN];

    if (nbLivres == 0)
    {
        printf("\tAucun livre en stock.\n");
        return;
    }

    printf("Titre du livre a supprimer : ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < nbLivres; i++)
    {
        if (strcasecmp(Livres[i].titres, titre) == 0)
        {
            for (int j = i; j < nbLivres - 1; j++)
            {
                Livres[j] = Livres[j + 1];
            }
            nbLivres--;
            printf("Livre supprime.\n");
            return;
        }
    }
    printf("Livre no trouve.\n");
}

void totalLivre()
{
    int total = 0;
    for (int i = 0; i < nbLivres; i++)
    {
        total += Livres[i].quantite;
    }
    printf("Nombre total de livres en stock : %d\n", total);
}