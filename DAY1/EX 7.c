#include <stdio.h>
int main(){
    int m,s20,s10,s5,s1;
    printf("Entrer un montant en dollar : ");
    scanf("%d",&m);
        s20=m/20;
        s10=(m%20)/10; 
        s5=(m%10)/5; 
        s1=(m%5)/1; 
    printf("Billet de 20$ : %d \n",s20);
    printf("Billet de 10$ : %d \n",s10);
    printf("Billet de 5$ : %d \n",s5);
    printf("Billet de 1$ : %d \n",s1);
    return 0;
}