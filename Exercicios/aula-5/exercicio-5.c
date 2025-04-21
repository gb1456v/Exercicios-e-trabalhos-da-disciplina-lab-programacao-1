#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,delta;
    float r1,r2;


    printf("Insira o valor de a:\n");
    scanf("%f",&a);
    printf("Insira o valor de b:\n");
    scanf("%f",&b);
    printf("Insira o valor de c:\n");
    scanf("%f",&c);
    delta = pow(b,2) - 4 * a * c;
    if(a != 0) {
        if(delta < 0) {
            printf("A equacao nao possui raizes\n");
        } else if (delta == 0) {
            r1 = (-b + sqrt(delta))/(2 * a);
            printf("A equacao so possui uma raiz: %.2f\n",r1);
        } else if (delta > 0) {
            r1 = (-b + sqrt(delta))/(2 * a);
            r2 = (-b - sqrt(delta))/(2 * a);
            printf("A equacao possui duas raizes: %.2f e %.2f\n", r1, r2);
        }
    } else {
        printf("Esta e uma equacao de 1o grau! O programa somente suporta equacoes de 2o grau!");
    }
}