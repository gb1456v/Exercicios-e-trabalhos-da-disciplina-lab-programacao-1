#include <stdio.h>
int main(){
    int a, b;


    printf("Digite um numero inteiro:\n");
    scanf("%d",&a);
    printf("Digite outro numero inteiro:\n");
    scanf("%d",&b);
    printf("Os valores digitados foram: %d e %d\n", a,b);
    a = a + b; 
    b = b - a;
    a = a - b;
    printf("Os valores digitados foram: %d e %d\n", a,b);
    
}