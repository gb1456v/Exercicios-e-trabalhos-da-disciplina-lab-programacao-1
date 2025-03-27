#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    printf("Digite seu nome:\n");
    scanf("%d", &idade);
    printf("Digite sua idade:\n");
    scanf("%s", nome);
    printf("Seu nome e %s\n", nome);
    printf("Sua idade e %d\n", idade);
    return 0;
}
