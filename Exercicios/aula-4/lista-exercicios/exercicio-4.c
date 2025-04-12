#include <stdio.h>

int main() {
    int horas_trabalhadas;
    float valor_hora;
    double s_bruto, s_liquido;
    printf("Digite quantas horas foram trabalhadas no mes:\n");
    scanf("%d",&horas_trabalhadas);
    printf("Quanto o trabalhador recebe por hora trabalhada?\n");
    scanf("%f",&valor_hora);
    s_bruto = (float)horas_trabalhadas * valor_hora;
    s_liquido = s_bruto - ((0.11 * s_bruto) +(s_bruto * 0.08) + (s_bruto * 0.05));
    printf("O seu salario bruto e: %.2lf\n", s_bruto);
    printf("E o seu salario liquido e: %.2lf\n", s_liquido);


}