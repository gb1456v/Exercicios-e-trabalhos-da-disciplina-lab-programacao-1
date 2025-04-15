#include <stdio.h>
#include <math.h>
int main() {

    float num, inverso, absoluto;

    printf("Digite um numero:\n");
    scanf("%f",&num);

    if(num > 0) {
        inverso = 1/num;
        printf("O inverso de %.2f e %.2f\n", num, inverso);
    } else {
        absoluto= fabs(num);
        printf("O valor absoluto de %.2f e %.2f\n", num, absoluto);
    }

}