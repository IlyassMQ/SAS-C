#include <stdio.h>
int main(){
   int nm, diz;
   printf("Entrer le nombre numerique : ");
   scanf("%d",&nm);
   if (nm>100 || nm<0){
    printf("Erreur La note est doit etre entre 0 et 100");
    return 1;
   }
   diz = nm/10;
   switch (diz){
        case  9 :
        case 10 : 
            printf("note litterale : A");
        break;
        case  8:
            printf("note litterale : B");
        break;
        case  7:
            printf("note litterale : D");
        break;
        default :
        printf("Note litterale : F");
        break;

        

   }
      
    return 0;
}