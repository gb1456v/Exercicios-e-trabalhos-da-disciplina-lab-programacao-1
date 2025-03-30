#include <stdio.h>

int main() {
    //declaração de variáveis
    int registro, dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9; // variáveis para o registro e os dígitos
    int dig_verificador1, dig_verificador2; // digitos verificadores
    int soma_S1, soma_S2, div_1,  div_2; // somas e divisões
    
    //mostra um mensagem que pede os  dígitos do Registro separadamente
    printf("Digite os dígitos do seu Registro Individual para que o programa calcule os digitos vericadores dele\n");
    scanf("%d",&registro);
    // Desmembra o registro em dígitos
    dig1 = registro / 100000000; // pega o primeiro dígito do registro
    dig2 = (registro / 10000000) % 10; // pega o segundo dígito do registro
    dig3 = (registro / 1000000) % 10; // pega o terceiro dígito do registro
    dig4 = (registro / 100000) % 10; // pega o quarto dígito do registro
    dig5 = (registro / 10000) % 10; // pega o quinto dígito do registro
    dig6 = (registro / 1000) % 10; // pega o sexto dígito do registro
    dig7 = (registro / 100) % 10; // pega o sétimo dígito do registro
    dig8 = (registro / 10) % 10; // pega o oitavo dígito do registro
    dig9 = registro % 10; // pega o nono dígito do registro
    
    // calculo do primeiro dígito verificador
    soma_S1 = (dig1 * 1 + dig2 * 2 + dig3 * 3 + dig4 * 4 + dig5 * 5 + dig6 * 6 + dig7 * 7 + dig8 * 8 + dig9 * 9); // obtém a soma S do primeiro dígito vericador

    div_1 = soma_S1 % 11; // divide o resultado da soma por 11 e pega o resto
   
    //verifica se o resultado da divisão é 10 e, se sim, atribui o valor 0 ao digito vericador, senão, atribui o resultado da divisão por 11 a ele

    if (div_1 == 10) {
        dig_verificador1 = 0;
    } else {
        dig_verificador1 = div_1;
    }
    //fim calculo do primeiro dígito vericador

    //calculo do segundo dígito vericador
    
    soma_S2 = (dig1 * 0 + dig2 * 1 + dig3 * 2 + dig4 * 3 + dig5 * 4 + dig6 * 5 + dig7 * 6 + dig8 * 7 + dig9 * 8 + dig_verificador1 * 9); // obtém a soma S do segundo dígito vericador
    div_2 = soma_S2 % 11; //obtém m resto da divisão por 11
    
    //verifica se o resultado da divisão é 10 e, se sim, atribui o valor 0 ao digito vericador, senão, atribui o resultado da divisão por 11 a ele
    if (div_2 == 10) {
        dig_verificador2 = 0;
    } else {
        dig_verificador2 = div_2;
    }
    // fim  calculo segundo digitosegundo dígito

    // mostra o Registro Individual com os dígitos vericadores
    printf("O seu Registro Individual e: \n %d%d%d%d%d%d%d%d%d/%d%d", dig1, dig2, dig3, dig4, dig5,dig6,dig7,dig8,dig9, dig_verificador1, dig_verificador2);
}
