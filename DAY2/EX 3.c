#include <stdio.h>

int main() {
    int m1, j1, a1;
    int m2, j2, a2;

    
    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m1, &j1, &a1);

    printf("Entrez la deuxieme date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m2, &j2, &a2);

    
    if (a1 < a2 || (a1 == a2 && m1 < m2) || (a1 == a2 && m1 == m2 && j1 < j2)) {
        printf("%d/%d/%d est plus tôt que %d/%d/%d\n", m1, j1, a1, m2, j2, a2);
    } else if (a1==a2 && m1==m2 && a1==a2){
    printf("Les deux dates sont identiques : %d/%d/%d\n", m1, j1, a1);
    }
    else {
    printf("%d/%d/%d est plus tôt que %d/%d/%d\n", m2, j2, a2, m1, j1, a1);
        
    }

    return 0;
}
