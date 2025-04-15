#include <stdio.h>

int main() {
    float num;

    printf("Digite um numero:-\n");
    scanf("%f",&num);

    if(num > 0) {
        printf("O numero digitado e positivo");    
    } else if (num == 0)
    {
        printf("O valor digitado e nulo");
    } else {
        printf("O valor digitado e negativo");
    }
}