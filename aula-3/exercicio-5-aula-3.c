#include <stdio.h>

int main() {

    int idade;
    int dias_de_um_ano = 365;
    int dias_restantes_vida;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    dias_restantes_vida = (dias_de_um_ano * idade);
    printf("Voce tem %d dias de vida", dias_restantes_vida);

}