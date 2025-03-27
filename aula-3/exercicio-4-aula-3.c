#include <stdio.h>

int main(){
    float preco;
    float desconto = 0.10;
    float preco_desconto;
    float preco_acrecimo;
    float acrecimo = 0.20;
    //input
    printf("Digite o preco do produto:");
    scanf("%f", &preco);
    //processamento
    preco_desconto = preco - (preco * desconto);
    preco_acrecimo = preco + (preco * acrecimo);
    //output
    printf("O preco com desconto e: R$ %.2f\n", preco_desconto);
    printf("O preco com acrecimo e: R$ %.2f\n", preco_acrecimo);
    printf("O preco original e: R$ %.2f\n", preco);

    

}
