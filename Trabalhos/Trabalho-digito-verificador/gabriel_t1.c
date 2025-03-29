#include <stdio.h>

int main() {
    //declaração de variáveis
    int dig1, dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9; //digitos do Registro
    int dig_verificador1, dig_verificador2; // digitos verificadores
    int soma_S1, soma_S2, div_1,  div_2; // somas e divisões
    
    //mostra uma mensagem informando pra digitar os dígitos do Registro separadamente
    printf("Digite os dígitos do seu Registro conforme forem solicitados para que o programa calcule os digitos vericadores dele\n");
    //pede cada um dos dígitos
    printf("Digite o 1o digito:\n");
    scanf("%d",&dig1);
    printf("Digite o 2o digito:\n");
    scanf("%d",&dig2);
    printf("Digite o 3o digito:\n");
    scanf("%d",&dig3);
    printf("Digite o 4o digito:\n");
    scanf("%d",&dig4);
    printf("Digite o 5o digito:\n");
    scanf("%d",&dig5);
    printf("Digite o 6o digito:\n");
    scanf("%d",&dig6);
    printf("Digite o 7o digito:\n");
    scanf("%d",&dig7);
    printf("Digite o 8o digito:\n");
    scanf("%d",&dig8);
    printf("Digite o 9o digito:\n");
    scanf("%d",&dig9);

    // calculo do primeiro dígito verificador
    soma_S1 = (dig1 * 1 + dig2 * 2 + dig3 * 3 + dig4 * 4 + dig5 * 5 + dig6 * 6 + dig7 * 7 + dig8 * 8 + dig9 * 9); 
    // obtém a soma S

    div_1 = soma_S1 % 11; // divide o resultado da soma por 11 e pega o resto
   
    //verifica se o resultado da divisão é 10 e, se sim, atribui o valor 0 ao digito vericador, senão, atribui o resultado da divisão à ele

    if (div_1 == 10) {
        dig_verificador1 = 0;
    } else {
        dig_verificador1 = div_1;
    }
    //fim primeiro dígito

    //segundo dígito vericador
    
    soma_S2 = (dig1 * 0 + dig2 * 1 + dig3 * 2 + dig4 * 3 + dig5 * 4 + dig6 * 5 + dig7 * 6 + dig8 * 7 + dig9 * 8 + dig_verificador1 * 9); // obtém o segundo dígito verificador
    div_2 = soma_S2 % 11; //obtém m resto da divisão por 11
    
    if (div_2 == 10) {
        dig_verificador2 = 0;
    } else {
        dig_verificador2 = div_2;
    }
    // fim segundo dígito

    // mostra o Registro com os dígitos vericadores
    printf("O seu Registro Individual e: \n %d%d%d%d%d%d%d%d%d/%d%d", dig1, dig2, dig3, dig4, dig5,dig6,dig7,dig8,dig9, dig_verificador1, dig_verificador2);
}
