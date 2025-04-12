#include <stdio.h>

int main() {
    float comp_terreno = 0, larg_terreno = 0, area_terreno; // terreno
    float comp_casa = 0, larg_casa = 0, area_casa; // casa
    float porcentagem_area_livre, area_livre;

    //terreno
    printf("Digite, em m, a largura do terreno:\n");
    scanf("%f",&larg_terreno);
    printf("Digite, em m, o comprimento do terreno:\n");
    scanf("%f",&comp_terreno);
    
    //casa
    printf("Digite, em m, a largura da casa sobre o terreno:\n");
    scanf("%f",&larg_casa);
    printf("Digite, em m, o comprimento da casa sobre o terreno:\n");
    scanf("%f",&comp_casa);

    area_terreno = comp_terreno * larg_terreno;
    area_casa = comp_casa * larg_casa;
    area_livre = area_terreno - area_casa;
    porcentagem_area_livre = area_livre / 100;
    printf("A área livre em metros quadrados e: %f", area_livre);
    printf("A área livre e %f por cento", porcentagem_area_livre);

} 