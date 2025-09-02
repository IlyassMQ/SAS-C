#include <stdio.h>
int main(){
    float m,ti,pm,s1,s2,s3,tim;
    printf("entrer le montant de pret : ");
    scanf("%f",&m);
    printf("Enter les taux d'interet : ");
    scanf("%f",&ti);
    printf("Enter le paiement mensuelle : ");
    scanf("%f",&pm);   
    tim=(ti/100/12);
    s1= (m-pm)+m*tim;
    s2= (s1-pm)+s1*tim;
    s3= (s2-pm)+s2*tim;
    printf(" Solde restant après le Premier paiement %.2f \n",s1);
    printf(" Solde restant après le Deuxieme paiement %.2f \n",s2);
    printf(" Solde restant après le Troisiemme paiement %.2f",s3);
    
    return 0;
}