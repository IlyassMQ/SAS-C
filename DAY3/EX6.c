#include <stdio.h>
#include <ctype.h> 

int main() {
    char M[100];
    int i;

    printf("Entrez votre message : ");
    scanf("%[^\n]", M);

    printf("En B1FF-speak : ");
    for (i = 0; M[i]!= '\0'; i++) {
        char c = toupper(M[i]);

        if (c == 'A')
            printf("4");
        else if (c == 'B')
            printf("8");
        else if (c == 'E')
            printf("3");
        else if (c == 'I')
            printf("1");
        else if (c == 'O')
            printf("0");
        else if (c == 'S')
            printf("5");
        else
            printf("%c", c);
    }

    
    printf("!!!!!!!!!!\n");

    return 0;
}
