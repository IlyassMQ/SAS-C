#include <stdio.h>

int main(void) {
    int T[10] = {0};  
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    
    while (n > 0) {
        digit = n % 10;   
        T[digit]++;   
        n /= 10;          
    }

    printf("Chiffre :");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\nOccurrences : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}

