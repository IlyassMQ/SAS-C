#include <stdio.h>
#include <string.h>
#include "decB.h"


char titres[MAX][MAX_LEN];
char auteurs[MAX][MAX_LEN];
float prix[MAX];
int quantite[MAX];
int nbLivres = 0;


void ajouterLivre() {
    printf("Titre : ");
    scanf(" %[^\n]", titres[nbLivres]);
    printf("Auteur : ");
    scanf(" %[^\n]", auteurs[nbLivres]);
    printf("Prix : ");
    scanf("%f", &prix[nbLivres]);
    printf("Quantite : ");
    scanf("%d", &quantite[nbLivres]);
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
               i + 1, titres[i], auteurs[i], prix[i], quantite[i]);
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
        if (strcmp(titres[i], titre) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &nouvelleQt);
            quantite[i] = nouvelleQt;
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
        if (strcmp(titres[i], titre) == 0) {
            for (int j = i; j < nbLivres - 1; j++) {
                strcpy(titres[j], titres[j + 1]);
                strcpy(auteurs[j], auteurs[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
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
        total += quantite[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
}
