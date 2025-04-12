#include <stdio.h>
int main(){
    int a, b, c;


    printf("Digite um numero inteiro:\n");
    scanf("%d",&a); //5
    printf("Digite outro numero inteiro:\n");
    scanf("%d",&b);//2
    printf("Os valores digitados foram: %d e %d\n", a,b);
    c = a; // armazena o valor de a na variavel c
    a = b; // armazena o valor de b na variável a
    b = c; // armazena o valor de a que foi copiado na variavel c na variável b
    printf("Os valores digitados foram: %d e %d\n", a,b);

}