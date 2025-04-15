#include <stdio.h>
int main() {
    int i, valores;
    float a,b,c, var_menor, var_maior, var_meio;

    printf("Digite os valores para i, a, b e c respectivamente");
    scanf("%d%f%f%f",&i,&a,&b,&c);
    switch(i) {
        case 1:
        if((a>b) && (b>c) && (c<a)) {
            printf("A ordem é: %d, %d, %d", a,b,c);
        }   
        case 2: 
            if((a<b) && (b<c) && (c>a)) {
                printf("%d,%d,%d", c,b,a);
            }
        case 3:
            if((a>b) && (a>c)) {
                printf("%d,%d,%d", b,a,c);
            }
            if ((b>a) && (b>c)) {
                
            }
    } 
}
