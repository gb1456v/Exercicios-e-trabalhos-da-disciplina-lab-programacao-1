#include <stdio.h>

int main() {
    // programa que converte a velocidade de m/s para km/h
    float velocidade, resultado;
    
    
    printf("Digite a velocidade em m/s");
    scanf("%f",&velocidade);
    resultado = velocidade * 3.6;
    printf("A velocidade em Km/h é $f", resultado);
}