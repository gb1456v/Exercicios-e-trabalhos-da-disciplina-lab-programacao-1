#include <stdio.h>

int main(){
    //variáveis
    float grau_Celsius;
    float convertido_Fahrenheit;
    //input
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &grau_Celsius);
    //processamento
    convertido_Fahrenheit = (grau_Celsius * 1,8) + 32;
    //output
    printf("A temperatura em Fahrenheit e: %.1f", convertido_Fahrenheit);
}
