#include <stdio.h>
int main(){
    float v,r;
    printf("Entrer le rayon \n");
    scanf("%f",&r);
    v=(4.0f/3.0f)*3.14*(r*r*r);
    printf("%.2f",v);
    return 0;
}