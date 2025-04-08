#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    int e_multiplo;
    bool multiplo;
    printf("Digite dois números inteiros:");
    scanf("%d%d",&a,&b);

    e_multiplo = a % b;

    if(e_multiplo == 0) {
        multiplo ="sim";
    } else {
        multiplo = "nao";
    }

    if(multiplo == "sim") {
        printf("O numero %d e multiplo de %d.", a,b);
    } else {
        printf("O numero %d nao e multiplo de %d.", a,b); 
    }

}