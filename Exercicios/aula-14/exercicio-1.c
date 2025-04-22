#include <stdio.h>

int vetor_10_valores(int vetor[10]) {
    int i;
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    return vetor[i];
}
int main() {
    int vetor[10], cont = 0;
    vetor_10_valores(vetor[10]);
    printf("Digite um valor:\n");
    scanf("%d", &v);
    for(i=0; i<10; i++) {
        if(v == vetor[i]) {
        cont++;
        }
        
    }
}