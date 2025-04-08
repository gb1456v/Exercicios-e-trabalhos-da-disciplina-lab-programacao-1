#include <stdio.h>

int main(){
    printf("1.Os alunos sao %d\n\n", 350); //printf normal
    printf("2.Os alunos sao %2d.\n\n", 350); //printf com um campo mínimo de 2 caracteres, então o número é impresso com, no mínimo, 2 caracteres e por isso fical igual o printf normal
    printf("3.Os alunos sao %4d.\n\n", 350); //printf com um campo mínimo de 4 caracteres, então o número é impresso com 4 caracteres
    printf("4.Os alunos sao %6d.\n\n", 350); ////printf com um campo mínimo de 6 caracteres3, então o número é impresso com 6 caracteres
    printf("5.Os alunos sao %02d.\n\n", 350); //printf com um campo mínimo de 2 caracteres e preenchimento com zeros em caso de sobra. Como o número tem 3 caracteres, ele é impresso normalmente
    printf("6.Os alunos sao %04d.\n\n", 350); //printf com um campo mínimo de 4 caracteres e preenchimento com zeros em caso de sobra. Como o número tem 3 caracteres, ele é impresso com um zero a esquerda
    printf("7.Os alunos sao %06d.\n\n", 350);  //printf com um campo mínimo de 6 caracteres com preenchimento nos caracteres que forem espaços em branco. Como o número tem 3 caracteres, ele é impresso com 3 zeros a esquerda.
    printf("8.Os alunos sao %10.02d.\n\n", 350); //printf com  um campo mínimo de 10 caracteres à esquerda sem preenchimento desses caracteres por zeros no lugar de espaços, com campo mínimo de 2 caracteres à direita do número depois dos 10 caracteres sendo esses preenchidos com zeros em caso de sobra de caracteres. Como o número tem 3 caracteres, ele é impresso com 7 espaços à esquerda e nenhum zero à direita depois dos 7 espaços em branco.
    printf("9.Os alunos sao %10.04d.\n\n", 350); //printf com  um campo mínimo de 10 caracteres à esquerda sem preenchimento desses caracteres por zeros no lugar de espaços, com campo mínimo de 4 caracteres à direita do número depois dos 10 caracteres sendo esses preenchidos com zeros em caso de sobra de caracteres. Como o número tem 3 caracteres, ele é impresso com 7 espaços à esquerda e um zero à direita depois dos 7 espaços em branco.
    printf("10.Os alunos sao %10.06d.\n\n", 350); //printf com  um campo mínimo de 10 caracteres à esquerda sem preenchimento desses caracteres por zeros no lugar de espaços, com campo mínimo de 6 caracteres à direita do número depois dos 10 caracteres sendo esses preenchidos com zeros em caso de sobra de caracteres. Como o número tem 3 caracteres, ele é impresso com 7 espaços à esquerda e 3 zeros à direita depois dos 7 espaços em branco.
}
