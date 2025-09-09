#ifndef decB
#define decB

#define MAX 100     
#define MAX_LEN 50  


typedef struct{
char titres[MAX_LEN];
char auteurs[MAX_LEN];
float prix;
int quantite;
}Livre;

Livre Livres[MAX];


extern int nbLivres;


void ajouterLivre();
void afficherLivre();
void mjQuantite();
void rechLivre();
void suppLivre();
void totalLivre();

#endif