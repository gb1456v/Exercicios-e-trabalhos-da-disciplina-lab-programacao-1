#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogar_dado() {
    int n;
    n = rand() % 6;
    return n;
}
int primeira_jogada() {
    numero_jogado1 = jogar_dado();
    numero_jogado2 = jogar_dado();
    numero_jogado3 = jogar_dado();
    tres_numeros_ordenados = ordenar_tres_numeros(numero_jogado1,numero_jogado2,numero_jogado3);
    pontos_ganhos =  total_pontos_1 - numero_ordenado;
    total_pontos_1 = pontos_ganhos;
    return pontos_ganhos;
}
int ordenar_dois_numeros(n1,n2) {
    int ordem_selecao, ordem_escolhida;
    printf("Digite a ordem dos algarismos que voce quer utilizar nesta jogada");
    printf("Selecione 1 para a ordem %d%d",n1,n2);
    printf("Selecione 2 para a ordem %d%d",n2,n1);
    scanf("%d", &ordem_selecao);

    switch(ordem_selecao) {
        case 1: 
            ordem_escolhida = (n1 * 10) + n2;
            return ordem_escolhida;
        case 2:
            ordem_escolhida = (n2 * 10) + n1;
            return ordem_escolhida;
    }
}
int ordenar_tres_numeros(n1,n2,n3) {
    int ordem_selecao, ordem_escolhida;
    printf("Digite a ordem dos algarismos que voce quer utilizar nesta jogada");
    printf("Selecione 1 para a ordem %d%d%d",n1,n2,n3);
    printf("Selecione 2 para a ordem %d%d%d",n1,n3,n2);
    printf("Selecione 3 para a ordem %d%d%d",n2,n1,n3);
    printf("Selecione 4 para a ordem %d%d%d",n2,n3,n1);
    printf("Selecione 5 para a ordem %d%d%d",n3,n1,n2);
    printf("Selecione 6 para a ordem %d%d%d",n3,n2,n1);
    scanf("%d", &ordem_selecao);
    switch(ordem_selecao) {
        case 1: 
            ordem_escolhida = (n1 * 100) + (n2 * 10) + n3;
            return ordem_escolhida;
        case 2:
            ordem_escolhida = (n2 * 100) + (n3 * 10) + n1;
            return ordem_escolhida;
        case 3:
            ordem_escolhida = (n2 * 100) + (n1 * 10) + n3;
            return ordem_escolhida;   
        case 4:
            ordem_escolhida = (n2 * 100) + (n3 * 10) + n1;
            return ordem_escolhida; 
        case 5:
            ordem_escolhida = (n2 * 100) + (n3 * 10) + n1;
            return ordem_escolhida; 
        case 6:
            ordem_escolhida = (n3 * 100) + (n2 * 100) + n1;
            return ordem_escolhida;
    }
}
int exibe_Pontuacao(int pontos_ganhos) {
    printf("Você ganhou %d nesta rodada!", pontos_ganhos);
    
}
int player_vs_player() {
    printf(" Digite o seu nickname(apelido):\n");
    scanf("%c", nick_player_1);
    printf("Voce escolheu jogar com outra pessoa!";)
    printf(" Digite o nickname do jogador 2\n");
    scanf("%c", nick_player_2);
    printf("Quem começa o jogo? Digite 1 para %c e 2 para %c\n", nick_player_1, nick_player_2);
    printf("Esta e a sua primeira jogada? Digite 1 para sim e 2 para nao");
    scanf("%d", &inicio);
    if(inicio == 1) {
        primeira_jogada();
    } else {

    }
}
int main() {
    int n1,n2,n3,qtd_dados,modo_de_jogo;
    int numero_jogado1, numero_jogado2,numero_jogado3, dois_numeros_ordenados, tres_numeros_ordenados;
    int primeira_jogada;
    int pontos_ganhos; 
    int total_pontos_1 = 999,total_pontos_2 = 999;
    char nick_player_1[25];
    char nick_player_2[25];
    int inicio;

    srand(time(NULL));
    printf("Bem-vindo ao jogo");
    printf("Selecione o modo de jogo:");
    printf("Digite 1 para jogar com outra pessoa ou digite 2 para jogar contra o computador");
    scanf("%d",&modo_de_jogo);
    switch(modo_de_jogo) {
        case 1: player_vs_player();
        
        
    }
}