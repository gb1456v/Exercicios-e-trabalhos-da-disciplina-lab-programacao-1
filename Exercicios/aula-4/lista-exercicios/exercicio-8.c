#include <stdio.h>

int main(){
    const float COMBUSTIVEL = 6.99;
    float odometro_inicial,odometro_final, litros_gastos, valor_recebido_clientes, media_consumo, gasto_combustivel, lucro_liquido;


    //valores odômetro
    printf("Digite o valor, em km, mostrado no odometro no inicio do dia\n");
    scanf("%f",&odometro_inicial);
    printf("Digite o valor, em km, mostrado no odometro no fim do dia\n");
    scanf("%f",&odometro_final);

    //litros gastos
    printf("Digite o total de litros de combustivel gastos no dia\n");
    scanf("%f",&litros_gastos);

    // valor total recebido dos clientes
    printf("Digite o valor total recebido dos clientes no dia \n");
    scanf("%f",&valor_recebido_clientes);
    
    media_consumo = (odometro_final- odometro_inicial) / litros_gastos;

    gasto_combustivel = litros_gastos * COMBUSTIVEL;

    lucro_liquido = valor_recebido_clientes -  gasto_combustivel;

    printf(" A media de consumo de combustivel e %.2f km/l\n", media_consumo);

    printf("O seu lucro liquido diario e %.2f reais\n", lucro_liquido);



}