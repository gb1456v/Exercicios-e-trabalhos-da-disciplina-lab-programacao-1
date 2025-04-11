#include <stdio.h>

int main() {
    int intervalo_inicio,intervalo_fim;
    int i, soma;
    printf("Digite o valor do ínicio do intervalo"); //1
    scanf("%d", &intervalo_inicio);
    printf("Digite o valor do fim do intervalo"); //10
    scanf("%d", &intervalo_fim);
    for(i=intervalo_inicio; i<intervalo_fim; i++) {
         if(i % 2 == 1) {
            printf("impares: ", i);
            soma = soma + i;
            printf("A soma dos numeros impares dá ", soma);
        }
    } 

}