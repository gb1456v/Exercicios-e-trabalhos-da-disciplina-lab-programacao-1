#include <stdio.h>

int main() {
    float b,h, res;

    printf("Digite o valor da base em cm do triangulo:\n");
    scanf("%f", &b);
    printf("Digite o valor da altura em cm do triangulo:\n");
    scanf("%f",&h);
    res = (b*h)/2;
    printf("A area do triangulo e:\n%.2fcm\n",res);
}