#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int jogar_dado() {
    int n;
    n = (rand() % 6) + 1;
    return n;
}
int escolhe_player(char nick_player_1[],  char nick_player_2[]) {
    int player_escolhido;
    printf("Quem comeca o jogo? Digite 1 para %s e 2 para %s\n", nick_player_1, nick_player_2);
    scanf("%d",&player_escolhido);
    return player_escolhido;
}
int ordenar_dois_numeros(int n1, int n2) {
    int ordem_selecao, ordem_escolhida;
    printf("Digite a ordem dos algarismos que voce quer utilizar nesta jogada?\n");
    printf("Selecione 1 para a ordem %d%d\n",n1,n2);
    printf("Selecione 2 para a ordem %d%d\n",n2,n1);
    scanf("%d", &ordem_selecao);
    if (ordem_selecao < 1 || ordem_selecao > 6) {
        printf("Opcao invalida! Digite um numero entre 1 e 6.\n");
        scanf("%d", &ordem_selecao);
    }
    switch(ordem_selecao) {
        case 1: 
            ordem_escolhida = (n1 * 10) + n2;
            return ordem_escolhida;
        case 2:
            ordem_escolhida = (n2 * 10) + n1;
            return ordem_escolhida;
    }
}
int ordenar_tres_numeros(int n1, int n2, int n3) {
    int ordem_selecao, ordem_escolhida;
    printf("Digite a ordem dos algarismos que voce quer utilizar nesta jogada\n");
    printf("Selecione 1 para a ordem %d%d%d\n",n1,n2,n3);
    printf("Selecione 2 para a ordem %d%d%d\n",n1,n3,n2);
    printf("Selecione 3 para a ordem %d%d%d\n",n2,n1,n3);
    printf("Selecione 4 para a ordem %d%d%d\n",n2,n3,n1);
    printf("Selecione 5 para a ordem %d%d%d\n",n3,n1,n2);
    printf("Selecione 6 para a ordem %d%d%d\n",n3,n2,n1);
    scanf("%d", &ordem_selecao);
    if (ordem_selecao < 1 || ordem_selecao > 6) {
        printf("Opcao invalida! Digite um numero entre 1 e 6.\n");
        scanf("%d", &ordem_selecao);
    }
    switch(ordem_selecao) {
        case 1: 
            ordem_escolhida = (n1 * 100) + (n2 * 10) + n3;
            return ordem_escolhida;
        case 2:
            ordem_escolhida = (n1 * 100) + (n3 * 10) + n2;
            return ordem_escolhida;
        case 3:
            ordem_escolhida = (n2 * 100) + (n1 * 10) + n3;
            return ordem_escolhida;   
        case 4:
            ordem_escolhida = (n2 * 100) + (n3 * 10) + n1;
            return ordem_escolhida; 
        case 5:
            ordem_escolhida = (n3 * 100) + (n1 * 10) + n2;
            return ordem_escolhida; 
        case 6:
            ordem_escolhida = (n3 * 100) + (n2 * 10) + n1;
            return ordem_escolhida;
    }
}
int primeira_jogada(int quem_joga) {
    int numero_jogado1,numero_jogado2,numero_jogado3;
    int tres_numeros_ordenados;
    int pontos_ganhos, quem_joga;
    numero_jogado1 = jogar_dado();
    numero_jogado2 = jogar_dado();
    numero_jogado3 = jogar_dado();
    if(quem_joga == 1) {

    }
    tres_numeros_ordenados = ordenar_tres_numeros(numero_jogado1,numero_jogado2,numero_jogado3);
    printf("O numero que deu foi: %d\n", tres_numeros_ordenados);
    pontos_ganhos = tres_numeros_ordenados;

    return pontos_ganhos;
}
int joga() {
    int numero_jogado1 = 0, numero_jogado2 = 0, numero_jogado3 = 0;
    int tres_numeros_ordenados = 0;
    int pontos_ganhos = 0, qtd_dados = 0, dois_numeros_ordenados = 0;
    printf("Quantos dados voce quer jogar nessa rodada? Digite um valor entre 1 e 3!\n");
    scanf("%d",&qtd_dados);
    if(qtd_dados > 3) {
        printf("Voce digitou uma quantidade de dados invalida. Por favor, digite um valor entre 1 e 3");
        scanf("%d",&qtd_dados);
    }
    switch(qtd_dados) {
        case 1:
            numero_jogado1 = jogar_dado();
            printf("O numero que deu foi: %d\n", numero_jogado1);
            pontos_ganhos = numero_jogado1;
            return pontos_ganhos;
        case 2:
            numero_jogado1 = jogar_dado();
            numero_jogado2 = jogar_dado();
            dois_numeros_ordenados = ordenar_dois_numeros(numero_jogado1, numero_jogado2);
            printf("O numero que deu foi: %d\n", dois_numeros_ordenados);
            pontos_ganhos = dois_numeros_ordenados;
            return pontos_ganhos;
        case 3:
            numero_jogado1 = jogar_dado();
            numero_jogado2 = jogar_dado();
            numero_jogado3 = jogar_dado();
            tres_numeros_ordenados = ordenar_tres_numeros(numero_jogado1, numero_jogado2,numero_jogado3);
            printf("O numero que deu foi: %d\n", tres_numeros_ordenados);
            pontos_ganhos = tres_numeros_ordenados;
            return pontos_ganhos;
    }
}
int joga_computador(int pontuacao_atual_player_1) {
    int numero_jogado1 = 0, numero_jogado2 = 0, numero_jogado3 = 0;
    int tres_numeros_ordenados = 0;
    int pontos_ganhos = 0, qtd_dados = 0, dois_numeros_ordenados = 0;
    if((pontuacao_atual_player_1 < 999)&& (pontuacao_atual_player_1 > 600)) {
        qtd_dados = 3;
    } else if ((pontuacao_atual_player_1 < 600) && (pontuacao_atual_player_1 > 400)){
        qtd_dados = 2;
    } else {
        qtd_dados = 1;
    }
    switch(qtd_dados) {
        case 1:
            numero_jogado1 = jogar_dado();
            printf("O numero que deu foi: %d\n", numero_jogado1);
            pontos_ganhos = numero_jogado1;
            return pontos_ganhos;
        case 2:
            numero_jogado1 = jogar_dado();
            numero_jogado2 = jogar_dado();
            dois_numeros_ordenados = ordenar_dois_numeros(numero_jogado1, numero_jogado2);
            printf("O numero que deu foi: %d\n", dois_numeros_ordenados);
            pontos_ganhos = dois_numeros_ordenados;
            return pontos_ganhos;
        case 3:
            numero_jogado1 = jogar_dado();
            numero_jogado2 = jogar_dado();
            numero_jogado3 = jogar_dado();
            tres_numeros_ordenados = ordenar_tres_numeros(numero_jogado1, numero_jogado2,numero_jogado3);
            printf("O numero que deu foi: %d\n", tres_numeros_ordenados);
            pontos_ganhos = tres_numeros_ordenados;
            return pontos_ganhos;
    }
}
void player_vs_player() {
    int player_escolhido; 
    int pontuacao_atual_player_1 = 0;
    int pontuacao_atual_player_2 = 0;
    int pontuacao_inicial_player_1 = 999;
    int pontuacao_inicial_player_2 = 999; 
    int pontos_ganhos_player_1=0, pontos_ganhos_player_2=0;
    char nick_player_1[16], nick_player_2[16];
    int vez_do_player;
    printf("Voce escolheu jogar com outra pessoa!\n");
    printf("Digite o seu nickname(apelido):\n");
    scanf("%s", nick_player_1);
    printf("Digite o nickname(apelido) do(a) outro(a) player:\n");
    scanf("%s", nick_player_2);
    player_escolhido = escolhe_player(nick_player_1, nick_player_2);
    if(player_escolhido == 1) {
        printf("%s: %d pontos\n", nick_player_1, pontuacao_inicial_player_1);
        printf("%s: %d pontos\n", nick_player_2, pontuacao_inicial_player_2);
        printf("Quem comeca e o(a) %s\n", nick_player_1);
        pontos_ganhos_player_1 = primeira_jogada();
        pontuacao_atual_player_1 = pontuacao_inicial_player_1 - pontos_ganhos_player_1;
        pontuacao_atual_player_2 = pontuacao_inicial_player_2;

        printf("Pontuacao atual:\n");
        printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
        printf("%s: %d pontos\n", nick_player_2, pontuacao_atual_player_2);
        vez_do_player = 2;
        while((pontuacao_atual_player_1 > 0) && (pontuacao_atual_player_2 > 0)) {
            if (vez_do_player == 1) {
                printf("Agora e a vez do(a) %s!\n", nick_player_1);
                pontos_ganhos_player_1 = joga();
                pontuacao_atual_player_1 -= pontos_ganhos_player_1;
                if (pontuacao_atual_player_1 < 0) {
                    pontuacao_atual_player_1 = 0;
                }
                printf("Pontuacao atual:\n");
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                printf("%s: %d pontos\n", nick_player_2, pontuacao_atual_player_2);
                vez_do_player = 2;
            } else {
                printf("Agora e a vez do(a) %s!\n", nick_player_2);
                pontos_ganhos_player_2 = joga();
                pontuacao_atual_player_2 -= pontos_ganhos_player_2;
                if (pontuacao_atual_player_2 < 0) {
                    pontuacao_atual_player_2 = 0;
                }
                printf("Pontuacao atual:\n");
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                printf("%s: %d pontos\n", nick_player_2, pontuacao_atual_player_2);
                vez_do_player = 1;
            }
        }
        if (pontuacao_atual_player_1 <= 0) {
            printf("Parabens, %s!! Voce ganhou esta partida!!\n", nick_player_2);
        } else if (pontuacao_atual_player_2 <= 0) {
            printf("Parabens, %s!! Voce ganhou esta partida!!\n", nick_player_1);
        }
    } else if(player_escolhido == 2) {
        printf("%s: %d pontos\n", nick_player_1, pontuacao_inicial_player_1);
        printf("%s: %d pontos\n", nick_player_2, pontuacao_inicial_player_2);
        printf("Quem comeca e o(a) %s\n", nick_player_2);
        pontos_ganhos_player_1 = primeira_jogada();
        pontuacao_atual_player_1 = pontuacao_inicial_player_1 - pontos_ganhos_player_1;
        pontuacao_atual_player_2 = pontuacao_inicial_player_2;

        printf("Pontuacao atual:\n");
        printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
        printf("%s: %d pontos\n", nick_player_2, pontuacao_atual_player_2);
        vez_do_player = 2;
        while((pontuacao_atual_player_1 > 0) &&
        (pontuacao_atual_player_2 > 0)){
            if (vez_do_player == 2) {
                printf("Agora e a vez do(a) %s!\n",nick_player_1);
                pontos_ganhos_player_1 = joga();
                pontuacao_atual_player_1 = pontuacao_atual_player_1 - pontos_ganhos_player_1;
                printf("Pontuacao atual:\n");
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                if(pontuacao_atual_player_1 < 0) {
                    printf("%s: 0 pontos\n", nick_player_1);
                    printf("Parabens!! Voce ganhou esta partida!!\n");
                } else {
                    printf("%s: %d pontos\n", nick_player_1,pontuacao_atual_player_1);    
                }
                vez_do_player = 1;
            } else if (vez_do_player == 1) {
                printf("Agora e a vez do(a) %s!\n",nick_player_2);
                pontos_ganhos_player_2 = joga();
                pontuacao_atual_player_2 = pontuacao_atual_player_2 - pontos_ganhos_player_2;
                printf("Pontuacao atual:\n");
                if(pontuacao_atual_player_2 < 0) {
                    printf("%s: 0 pontos\n", nick_player_2);
                    printf("Parabens,%s!! Voce ganhou esta partida!!\n");
                } else {
                    printf("%s: %d pontos\n", nick_player_1,pontuacao_atual_player_2);    
                }
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                vez_do_player = 2;
            }
        }
    }
}
void player_vs_computador() {
    int player_escolhido; 
    int pontuacao_atual_player_1 = 0;
    int pontuacao_atual_computador = 0;
    int pontuacao_inicial_player_1 = 999;
    int pontuacao_inicial_computador = 999; 
    int pontos_ganhos_player_1=0, pontos_ganhos_computador=0;
    char nick_player_1[16], nick_computador[] = "computador";
    int vez_do_player;
    printf("Voce escolheu jogar contra o computador! Boa sorte!\n");
    printf("Digite o seu nickname(apelido):\n");
    scanf("%s", nick_player_1);
    player_escolhido = escolhe_player(nick_player_1, nick_computador);
    if(player_escolhido == 1) {
        printf("%s: %d pontos\n", nick_player_1, pontuacao_inicial_player_1);
        printf("%s: %d pontos\n", nick_computador, pontuacao_inicial_computador);
        printf("Quem comeca e o(a) %s\n", nick_player_1);
        pontos_ganhos_player_1 = primeira_jogada();
        pontuacao_atual_player_1 = pontuacao_inicial_player_1 - pontos_ganhos_player_1;
        pontuacao_atual_computador = pontuacao_inicial_computador;

        printf("Pontuacao atual:\n");
        printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
        printf("%s: %d pontos\n", nick_computador, pontuacao_atual_computador);
        vez_do_player = 2;
        while((pontuacao_atual_player_1 > 0) &&
        (pontuacao_atual_computador > 0)){
            if (vez_do_player == 2) {
                printf("Agora e a vez do(a) %s!\n",nick_computador);
                pontos_ganhos_computador = joga_computador(pontuacao_atual_player_1);
                pontuacao_atual_computador = pontuacao_atual_computador - pontos_ganhos_computador;
                printf("Pontuacao atual:\n");
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                if(pontuacao_atual_computador < 0) {
                    printf("%s: 0 pontos\n", nick_computador);
                    printf("Parabens!! Voce ganhou esta partida!!\n", nick_computador);
                } else {
                    printf("%s: %d pontos\n", nick_computador,pontuacao_atual_computador);    
                }
                vez_do_player = 1;
            } else if (vez_do_player == 1) {
                printf("Agora e a vez do(a) %s!\n",nick_player_1);
                pontos_ganhos_player_1 = joga();
                pontuacao_atual_player_1 = pontuacao_atual_player_1 - pontos_ganhos_player_1;
                printf("Pontuacao atual:\n");
                if(pontuacao_atual_player_1 < 0) {
                    printf("%s: 0 pontos\n", nick_player_1);
                    printf("Parabens,%s!! Voce ganhou esta partida!!\n", nick_player_1);
                } else {
                    printf("%s: %d pontos\n", nick_player_1,pontuacao_atual_player_1);    
                }
                printf("%s: %d pontos\n", nick_computador, pontuacao_atual_computador);
                vez_do_player = 2;
            }
        }
    } else if(player_escolhido == 2) {
        printf("%s: %d pontos\n", nick_player_1, pontuacao_inicial_player_1);
        printf("%s: %d pontos\n", nick_computador, pontuacao_inicial_computador);
        printf("Quem comeca e o(a) %s\n", nick_computador);
        pontos_ganhos_player_1 = primeira_jogada();
        pontuacao_atual_player_1 = pontuacao_inicial_player_1 - pontos_ganhos_player_1;
        pontuacao_atual_computador = pontuacao_inicial_computador;
        printf("Pontuacao atual:\n");
        printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
        printf("%s: %d pontos\n", nick_computador, pontuacao_atual_computador);
        vez_do_player = 2;
        while((pontuacao_atual_player_1 > 0) &&
        (pontuacao_atual_computador > 0)){
            if (vez_do_player == 2) {
                printf("Agora e a vez do(a) %s!\n",nick_player_1);
                pontos_ganhos_player_1 = joga();
                pontuacao_atual_player_1 = pontuacao_atual_player_1 - pontos_ganhos_player_1;
                printf("Pontuacao atual:\n");
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                if(pontuacao_atual_player_1 < 0) {
                    printf("%s: 0 pontos\n", nick_player_1);
                    printf("Parabens!! Voce ganhou esta partida!!\n");
                } else {
                    printf("%s: %d pontos\n", nick_player_1,pontuacao_atual_player_1);    
                }
                vez_do_player = 1;
            } else if (vez_do_player == 1) {
                printf("Agora e a vez do(a) %s!\n",nick_computador);
                pontos_ganhos_computador = joga_computador(pontuacao_atual_player_1);
                pontuacao_atual_computador = pontuacao_atual_computador - pontos_ganhos_computador;
                printf("Pontuacao atual:\n");
                if(pontuacao_atual_computador < 0) {
                    printf("%s: 0 pontos\n", nick_computador);
                    printf("Parabens,%s!! Voce ganhou esta partida!!\n");
                } else {
                    printf("%s: %d pontos\n", nick_player_1,pontuacao_atual_computador);    
                }
                printf("%s: %d pontos\n", nick_player_1, pontuacao_atual_player_1);
                vez_do_player = 2;
            }
        }
    }
}
int main() {
    int modo_de_jogo;
    srand(time(NULL));
    printf("Bem-vindo ao jogo\n");
    printf("Selecione o modo de jogo:\n");
    printf("Digite 1 para jogar com outra pessoa ou digite 2 para jogar contra o computador\n");
    scanf("%d",&modo_de_jogo);
    switch(modo_de_jogo) {
        case 1: player_vs_player();
        break;
        case 2: player_vs_computador();
        break;
    }
}