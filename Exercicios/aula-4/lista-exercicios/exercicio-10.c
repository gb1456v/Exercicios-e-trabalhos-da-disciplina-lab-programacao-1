#include <stdio.h>

int main() {
    int qtd_carros_locadora, carros_retirados, carros_renovados, total_carros_fim_ano;
    float valor_aluguel, faturamento_anual, multa_atraso_fixa;


    printf("Digite quantos carros a locadora possuí:\n");
    scanf("%d", &qtd_carros_locadora);
    printf("Digite o valor do aluguel por dia:\n");
    scanf("%f", &valor_aluguel);

    faturamento_anual = (((qtd_carros_locadora / 3) *  valor_aluguel) * 12) ;

    multa_atraso_fixa = (((valor_aluguel * 0.10) + valor_aluguel) * (qtd_carros_locadora / 10));

    carros_retirados = (qtd_carros_locadora - (qtd_carros_locadora * 0.05));
    carros_renovados = (qtd_carros_locadora / 8) * qtd_carros_locadora;
    
    total_carros_fim_ano = carros_renovados - carros_retirados; 

    printf("O faturamento anual da locadora e: %f\n", faturamento_anual);

    printf(" O valor ganho com multas por atraso na devolucao do veiculo é:  %f\n", multa_atraso_fixa);
    
    printf("O total de carros no fim do ano será de: %d ", total_carros_fim_ano);

}