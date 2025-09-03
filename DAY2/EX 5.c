#include <stdio.h>
int main(){
int m,n,rest;
printf("Entrer deux entier : ");
scanf("%d",&m);
scanf("%d",&n);
 


while ( n!=0 ){
rest = m%n;
m=n;
n=rest;
}
    printf("le gcd est %d ", m);
    return 0;
}