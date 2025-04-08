#include <stdio.h>

int main() {
    float razao, primeiro_termo,decimo_termo;
    printf("Digite a razao da PA e o primeiro termo da PA:\n");
    scanf("%f %f",&razao,&primeiro_termo);
    decimo_termo = primeiro_termo + razao*(10-1);
    printf("O decimo termo da PA e:\n", decimo_termo);
}