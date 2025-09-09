#include <stdio.h>
#include <string.h>
#include "decB.h"


int nbLivres = 0;


void ajouterLivre() {

    printf("Titre : ");
    scanf(" %[^\n]", Livres[nbLivres].titres);
    printf("Auteur : ");
    scanf(" %[^\n]", Livres[nbLivres].auteurs);
    printf("Prix : ");
    scanf("%f", &Livres[nbLivres].prix);
    printf("Quantite : ");
    scanf("%d", &Livres[nbLivres].quantite);
    nbLivres++;
    printf("Livre ajoute avec succes.\n");
}


void afficherLivre() {
    if (nbLivres == 0) {
        printf("\t Aucun livre en stock.\n");
        return;
    }
    printf("\t Liste des Livres \n");
    for (int i = 0; i < nbLivres; i++) {
        printf("%d. Titre : %s | Auteur: %s | Prix : %.2f $ | Quantite %d \n",
               i + 1, Livres[i].titres, Livres[i].auteurs, Livres[i].prix, Livres[i].quantite);
    }
}


void mjQuantite() {
    char titre[MAX_LEN];
    int nouvelleQt;

    if (nbLivres == 0) {
        printf("\tAucun livr en stock a modifier\n");
        return;
    }

    printf("Titre du livre a modifier : ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < nbLivres; i++) {
        if (strcasecmp(Livres[i].titres, titre) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &nouvelleQt);
            Livres[i].quantite = nouvelleQt;
            printf("Quantite mise a jour\n");
            return;
        }
    }
    printf("Livre non trouve\n");
}


void suppLivre() {
    char titre[MAX_LEN];

    if (nbLivres == 0) {
        printf("\tAucun livre en stock.\n");
        return;
    }

    printf("Titre du livre a supprimer : ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < nbLivres; i++) {
        if (strcasecmp(Livres[i].titres, titre) == 0) {
            for (int j = i; j < nbLivres - 1; j++) {
                Livres[j]=Livres[j+1];
            }
            nbLivres--;
            printf("Livre supprime.\n");
            return;
        }
    }
    printf("Livre no trouve.\n");
}


void totalLivre() {
    int total = 0;
    for (int i = 0; i < nbLivres; i++) {
        total += Livres[i].quantite;
    }
    printf("Nombre total de livres en stock : %d\n", total);
}