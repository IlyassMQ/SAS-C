#include <stdio.h>
#include <ctype.h>

int main() {
    char mot[50];  
    int total;   

    printf("Entrez un mot : ");
    scanf("%s", mot);  
    total=0;
    for (int i = 0; mot[i] != '\0'; i++) {   
        char c = toupper(mot[i]);            
        if (c=='A'||c=='E'||c=='I'||c=='L'||c=='N'||c=='O'||c=='R'||c=='S'||c=='T'||c=='U') 
            total += 1;

        if (c=='D'||c=='G') 
            total += 2;

        if (c=='B'||c=='C'||c=='M'||c=='P') 
            total += 3;

        if (c=='F'||c=='H'||c=='V'||c=='W'||c=='Y') 
            total += 4;

        if (c=='K') 
            total += 5;

        if (c=='J'||c=='X') 
            total += 8;

        if (c=='Q'||c=='Z') 
            total += 10;
    }

    printf("Valeur Scrabble : %d", total);
    return 0;
}
