#include <stdio.h>
int main(){
    float m,t,s;

    printf("Entrer le montant : \n");
    scanf("%f",&m);
    t=(m/100)*5;
    s=t+m;
    printf("Avec taxe ajoute  %.2f $",s);

    return 0;
}