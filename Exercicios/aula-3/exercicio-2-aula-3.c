#include <stdio.h>

int main(){
    //variáveis
    int x, y, x_incrementado, y_decrementado;
    //código
    printf("Digite um valor inteiro para x\n");
    scanf("%d",&x);
    printf("Digite um valor inteiro para y\n");
    scanf("%d",&y);
    x_incrementado = ++x;
    printf("O sucessor do x e: %d\n", x_incrementado);
    y_decrementado = --y;
    printf("O antecessor do y e: %d\n",  y_decrementado);
    return 0;
}
