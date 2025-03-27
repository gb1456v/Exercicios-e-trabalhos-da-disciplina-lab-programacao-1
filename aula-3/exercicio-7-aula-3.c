#include <stdio.h>

int main() {

    int data, dia, mes, ano;

    printf("Digite uma data no formato DDMMAA: ");
    scanf("%d", &data);
    dia = data / 10000; // Divide por 10000 para obter o dia da data

    mes = (data / 100) % 100; // divide a data por 100 para obter a data sem o ano e depois pega o resto inteiro da divisão por 100 para obter o mês
    ano = data % 100; // Usa % 100 para obter o resto inteiro que corresponde ao ano
    printf("Dia: %d\n", dia);
    printf("Mes: %02d\n", mes);
    printf("Ano: %02d\n", ano);
    return 0;
}