#include <stdio.h>
int main(){
       int a,b,c,d,e;
       printf("Entrer le ISBN : ");
       scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
       printf("Prefixe GS1 : %d\n",a); 
       printf("Identifiant de group : %d \n",b);
       printf("Code de l'editeur : %d \n",c);
       printf("Numero d'article  : %d \n",d);
       printf("Chiffre de controle  : %d",e);

        
    return 0;
}