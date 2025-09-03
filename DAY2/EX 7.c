#include <stdio.h>

int main() {
    int n, carre;

    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    printf("Les carrés pairs entre 1 et %d sont :\n", n);

    for (int i = 1;  i*i <= n; i++) {
        carre = i * i;
        if (carre % 2 == 0) {   
            printf("%d\n", carre);
        }
    }

    return 0;
}