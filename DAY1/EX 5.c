#include <stdio.h>
int main(){
    float x,p;
    printf("Entrer valeur de x :");
    scanf("%f",&x);

    p = (3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6);
    printf("La resultat du  polynome %2.f ",p);
    return 0;
}