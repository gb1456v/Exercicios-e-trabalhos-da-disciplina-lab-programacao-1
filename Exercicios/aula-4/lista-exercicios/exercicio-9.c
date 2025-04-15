#include <stdio.h>

int main(){
    int moeda_001, moeda_005, moeda_010, moeda_025, moeda_050, moeda_1;
    double economia;
   
    printf("Digite a quantidade de moedas de 0.01 centavos\n");
    scanf("%d",&moeda_001);
    printf("Digite a quantidade de moedas de 0.05 centavos\n");
    scanf("%d",&moeda_005);
    printf("Digite a quantidade de moedas de 0.10 centavos\n");
    scanf("%d",&moeda_010);
    printf("Digite a quantidade de moedas de 0.25 centavos\n");
    scanf("%d",&moeda_025);
    printf("Digite a quantidade de moedas de 0.50 centavos\n");
    scanf("%d",&moeda_050);
    printf("Digite a quantidade de moedas de 1 real\n");
    scanf("%d",&moeda_1);
    if(moeda_001 == 0 || moeda_005 == 0 || moeda_010 == 0 || moeda_025 == 0 || moeda_050 == 0 || moeda_1 == 0) {
        printf("Não existe(em) moeda(as) desse(es) tipo(s).\n");

    }
    economia = ((0.01 * moeda_001) + (0.05 * moeda_005) + (0.10 * moeda_010) + (0.25 * moeda_025) + (0.50 * moeda_050) + moeda_1); 
    printf("A economia total e de %.2f\n", economia);
}