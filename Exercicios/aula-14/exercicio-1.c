#include <stdio.h>
int preenche_vetor(int vetor[10]) {
    int i=1; 
    int cont_numero=1;
    //pede 1 numero para cada posicao do vetor
    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: \n", cont_numero);
        scanf("%d", &vetor[i]);
        cont_numero++;
    }
}
void procura_numero(int vetor[10]) {
    int cont = 0;
    int v;
    int i = 0;
    //pega um valor digitado pelo usuário e verifica se está no vetor
    printf("Digite o numero que voce quer procurar dentro do vetor:\n");
    scanf("%d", &v);
    for(i=0; i<10; i++) {
        if(v == vetor[i]) {
        cont++;
        }    
    }
    printf("O numero foi encontrado %d vezes dentro do vetor", cont);
}
int main() {
    int vetor[10];
    int cont = 0, v, i = 0;
    preenche_vetor(vetor[10]);
    procura_numero(vetor[10]);
}