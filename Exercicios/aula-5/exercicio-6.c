#include <stdio.h>
int main() {
    float altura, peso_ideal; 
    char sexo;
    printf("Digite a altura do paciente\n");
    scanf("%f", &altura);
    printf("Digite o sexo biologico do(a) paciente: M para Masculino e F para Feminino");
    scanf(" %c", &sexo);
    if(sexo == 'M') {
        peso_ideal = ((72.7 * altura) - 58);
        printf("O seu peso ideal e: %.2f\n", peso_ideal);

    } else if (sexo == 'F') {
        peso_ideal = ((62.1 * altura) - 44.7);
        printf("O seu peso ideal e: %.2f\n", peso_ideal);
    } else {
        printf("Voce digitou um valor invalido para o sexo.");
    }
}