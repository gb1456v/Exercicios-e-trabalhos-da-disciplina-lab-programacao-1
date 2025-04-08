#include <stdio.h>

int x;
float y;
double z;
int main(){
    printf("Digite um valor para a variavel x: \n");
    scanf("%d", &x);
    printf("Digite um valor para a variavel y: \n");
    scanf("%f", &y);
    printf("Digite um valor para a variavel z: \n");
    scanf("%lf", &z);
    printf("O valor das variaveis x, y e z sao, respectivamente: %d, %.3f e %.4lf \n",x,y,z);
    return 0;
}
