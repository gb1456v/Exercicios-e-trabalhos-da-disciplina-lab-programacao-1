#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,resultado,s;

    printf("Digite um valor para o lado a:\n");
    scanf("%f",&a);
    printf("Digite um valor para o lado b:\n");
    scanf("%f",&b);
    printf("Digite um valor para o lado c:\n");
    scanf("%f",&c);
    if(((a + b)> c) && ((a + c)>b) && ((b+c)>a)) {
        s = (a + b + c)/2;
        resultado=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("A area do triangulo e: %f\n",resultado);
    } else {
        printf("Nao formam um triangulo!");
    }
}