#include <stdio.h>

int main() {
    int T[5][5];

    
    for (int i = 0; i < 5; i++) {
        printf("Entrez la ligne %d : ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    printf("Totaux des lignes : ");
    for (int i = 0; i < 5; i++) {
        int sommeL = 0;
        for (int j = 0; j < 5; j++) {
            sommeL += T[i][j];
        }
        printf("%d ", sommeL);
    }
    
    
    printf("\n Totaux des colonnes : ");
    for (int j = 0; j < 5; j++) {
        int sommeC = 0;
        for (int i = 0; i < 5; i++) {
            sommeC += T[i][j];
        }
        printf("%d ", sommeC);
    }
    

    return 0;

}
