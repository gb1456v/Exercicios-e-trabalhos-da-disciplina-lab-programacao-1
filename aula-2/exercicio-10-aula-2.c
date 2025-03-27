#include <stdio.h>

int main() {
    const int NUM = 5;
    const int NUM_somado1 = NUM + 1;
    const int NUM_diminuido1 = NUM - 1;
    printf("O sucessor da constante NUM e: %d\n", NUM_somado1);
    printf("O antecessor da constante NUM e: %d\n", NUM_diminuido1);
}