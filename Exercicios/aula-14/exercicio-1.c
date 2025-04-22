#include <stdio.h>
int main() {
    int vetor[10], cont = 0, v, i;
    //pede 1 numero para cada posicao do vetor
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    //pega um valor digitado pelo usuário e verifica se está no vetor
    printf("Digite um valor:\n");
    scanf("%d", &v);
    for(i=0; i<10; i++) {
        if(v == vetor[i]) {
        cont++;
        }    
    }
    printf("O numero foi encontrado %d vezes dentro do vetor", cont);
}