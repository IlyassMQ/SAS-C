#include <stdio.h>
int main(){
int n,dn,pn;
printf("Entrez un nombre a deux chiffre : ");
scanf("%d",&n);

dn = n%10;
pn = n/10;

printf("Le nombre inverse est : %d%d",dn,pn);
    return 0;
}