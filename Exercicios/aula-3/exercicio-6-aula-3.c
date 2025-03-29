#include <stdio.h>

int main() {

    int n1;
    printf("Digite um numero maior que 100: ");
    scanf("%d", &n1);

    if (n1 > 100) {
        int dezenas = (n1 / 10) % 10; // Divide por 10 para remover o algarismo das unidades e depois usa % 10 para obter o algarismo das dezenas
        printf("O algarismo das dezenas do numero digitado e: %d\n", dezenas);
    } else {
        printf("Numero invalido. Por favor, digite um numero maior que 100.\n");
    }

    return 0;
}