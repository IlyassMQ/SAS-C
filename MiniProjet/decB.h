#ifndef decB
#define decB

#define MAX 100     
#define MAX_LEN 50  


extern char titres[MAX][MAX_LEN];
extern char auteurs[MAX][MAX_LEN];
extern float prix[MAX];
extern int quantite[MAX];
extern int nbLivres;


void ajouterLivre();
void afficherLivre();
void mjQuantite();
void suppLivre();
void totalLivre();

#endif