#include <stdio.h>

int main(){
    //variveis
    int peso_1, peso_2;
    float nota_1, nota_2, media;
    //cdigo
    printf("Digite o peso da nota 1:");
    scanf("%d",&peso_1);
    printf("Digite o peso da nota 2:");
    scanf("%d",&peso_2);
    printf("Digite a nota 1:");
    scanf("%f",&nota_1);
    printf("Digite a nota 2:");
    scanf("%f",&nota_2);
    media = (nota_1*peso_1)+(nota_2*peso_2)/peso_1 + peso_2;
    printf("O valor da media ponderada e: %.2f", media);
    return 0;
}
