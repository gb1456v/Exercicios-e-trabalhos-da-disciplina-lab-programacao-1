#include <stdio.h>

int main() {
    int a,b;
    
    printf("Digite um valor inteiro:\n");
    scanf("%d",&a);
    printf("Digite outro valor inteiro:\n");
    scanf("%d",&b);

    if(a % b == 0) {
        printf("O numero %d e multiplo de %d \n", a,b);
    } else {
        printf("O numero %d nao e multiplo de %d", a,b);
    }
}