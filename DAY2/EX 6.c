#include <stdio.h>
int main(){
    int a ,b,gcd,dn,dd;
    printf("Entrer une fraction ");
    scanf("%d/%d",&a,&b);
    
    gcd = a%b;
    a=b;
    b = gcd;

    dn =a/gcd;
    dd= b/gcd;
    printf("souS sa forme simple : %d/%d ",dd,dn);


    return 0;
}