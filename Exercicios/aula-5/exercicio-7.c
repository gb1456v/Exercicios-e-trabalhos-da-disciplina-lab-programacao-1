#include <stdio.h>

int main() {
    float num1, num2, res;
    char caractere;

    printf("Digite um numero\n");
    scanf("%f",&num1);
    printf("Digite outro numero\n");
    scanf("%f",&num2);
    printf("Digite o simbolo da operacao matematica a ser realizada\nDigite +,-,* ou / apenas\n");
    scanf(" %c", &caractere);
    if((num1 == 0.0) || (num2 == 0.0) || (num1 == 0) || (num2 == 0)) {
        printf("Nao foi possivel realizar o calculo");
    } else { 
        if(caractere == '+') {
            res = num1 + num2;
            printf("O resultado e: %f\n", res);
        } else if (caractere == '-') {
            res = num1 - num2;
            printf("O resultado e: %f\n", res);
        } else if (caractere == '*') {
            res = num1 * num2;
            printf("O resultado e: %f\n", res);
        } else if (caractere == '/') {
            res = num1 / num2;
            printf("O resultado e: %f\n", res);
        }
    }
}