#include <stdio.h>
#include <stdlib.h>

int winner(int winnergrid[3][3]){
    int i = 0;
    if((winnergrid[0][0] == 1 && winnergrid[0][0] == winnergrid[1][1] && winnergrid[0][0] == winnergrid[2][2])
       ||( winnergrid[0][2] == 1 && winnergrid[0][2] == winnergrid[1][1] && winnergrid[0][2] == winnergrid[2][0])){
        printf("\nJogador O ganhou!\n");
        system("pause");
        return 1;
    }else if(i == 0){
        for(i=0; i<3; i++){
            if((winnergrid[i][0] == 1 && winnergrid[i][0] == winnergrid[i][1] && winnergrid[i][1] == winnergrid[i][2])
               ||(winnergrid[0][i] == 1 && winnergrid[0][i] == winnergrid[1][i] && winnergrid[1][i] == winnergrid[2][i])){
                printf("\nJogador O ganhou!\n");
                system("pause");
                return 1;
            }
        }
    }
    //i = 0;
    if((winnergrid[0][0] == 2 && winnergrid[0][0] == winnergrid[1][1] && winnergrid[0][0] == winnergrid[2][2] )
       ||( winnergrid[0][2] == 2 && winnergrid[0][2] == winnergrid[1][1] && winnergrid[0][2] == winnergrid[2][0])){
        printf("\nJogador X ganhou!\n");
        system("pause");
        return 1;
    }else if(i == 0){
        for(i=0; i<3; i++){
            if((winnergrid[i][0] == 2 && winnergrid[i][0] == winnergrid[i][1] && winnergrid[i][1] == winnergrid[i][2])
               ||(winnergrid[0][i] == 2 && winnergrid[0][i] == winnergrid[1][i] && winnergrid[1][i] == winnergrid[2][i])){
                printf("\nJogador X ganhou!\n");
                system("pause");
                return 1;
            }
        }
    }else{
        return 0;
    }
}

void drawgrid(int gridoutput [3][3]){    //Recebe os valores do jogo e desenha as jogadas (0 = Vazio, 1 = Bolinha, 2= Xis)
    int i; int j;
    char supportgrid[3][3] = {0};
    for(i = 0; i<=2; i++){
        for(j = 0; j<=2; j++){
            if((gridoutput[i][j]) == 1){
                supportgrid[i][j] = ('O');
            }else if((gridoutput[i][j]) == 2){
                supportgrid[i][j] = ('X');
            }else{
                supportgrid[i][j] = (' ');
            }
        }
    }
    system("cls");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", supportgrid [0][0], supportgrid [0][1], supportgrid[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", supportgrid [1][0], supportgrid [1][1], supportgrid[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", supportgrid [2][0], supportgrid [2][1], supportgrid[2][2]);
    printf("     |     |     \n");

}

void regras(){
    system("cls");
    printf("Bem vindo ao jogo da velha para Windows criado\npara testar coisas e chutar a bunda da coleguinha =]\n\n");
    system("pause");
    system("cls");
    printf("Como o jogo classico a vitoria sera alcancada\nquando o jogador atingir 3 vezes seguidas de seu simbolo\nseja na horizontal, vertical ou diagonal\n\n");
    system("pause");
    system("cls");
    printf("Neste programa, o primeiro jogador sera o representado pela |O|\nSeguido pelo segundo jogador representado pelo |X|\n\n");
    system("pause");
    system("cls");
    printf("Irei direcionalo para o modo multiplayer, boa sorte e divirtase!\n\n");
    system("pause");
    multiplayer();
}

void singleplayer(){
    system("cls");
    printf("Modo single player incompleto, previsto para a vercao 2.0 ;)\n");
    printf("Que tal testar a versao multiplayer?\n");
    system("pause");
    system("cls");
    multiplayer();
}

void multiplayer(){
    int i; int j;
    int jogadas;
    char sair;
    int player;
    int win = 0;
    int gridinput[3][3] = {0};
    drawgrid(gridinput);
    for(jogadas = 0; win!= 1 && jogadas<9; jogadas++){
        player = (jogadas%2)+1;
        if(player == 1){
            printf("Player O");
        }else if(player == 2){
            printf("Player X ", player);
        }
        printf("\nDigite a linha desejada: ");
        scanf("%d", &i);
        while(i<1||i>3){
            printf("Insira uma opcao valida para a linha: ");
            scanf("%d", &i);
        }
        printf("Digite a coluna desejada: ");
        scanf("%d", &j);
        while(j<1||j>3){
            printf("Insira uma opcao valida para a coluna: ");
            scanf("%d", &j);
        }
        while(gridinput[i-1][j-1] != 0){
            printf("Este quadrante ja esta ocupado! Jogue novamente\n");
            printf("\nDigite a linha desejada: ");
            scanf("%d", &i);
            while(i<1||i>3){
                printf("Insira uma opcao valida para a linha: ");
                scanf("%d", &i);
            }
            printf("Digite a coluna desejada: ");
            scanf("%d", &j);
            while(j<1||j>3){
                 printf("Insira uma opcao valida para a coluna: ");
                 scanf("%d", &j);
            }

        }
        gridinput[i-1][j-1] = player;
        drawgrid(gridinput);
        win = winner(gridinput);
        if(jogadas == 8 && win == 0){
        printf("Temos um empate!\n\n");
        system("pause");
        win = 1;
        }
    }
    system("cls");
    printf("|Fim de jogo|\n\n");
    system("pause");
    system("cls");
    printf("Deseja jogar novamente?\n");
    printf("1. Sim\n");
    printf("---Qualquer outro numero para sair\n");
    scanf("%d", &win);
    if(win == 1){
        gamemodeselect();
    }
}

int gamemodeselect (){
    int select;
    system("cls");
    printf("1. Single player\n");
    printf("2. Multiplayer\n");
    printf("3. Regras\n");
    printf("4. Sair\n");
    printf("Escolha a opcao desejada: ");
    scanf("%d", &select);
    while((select!=1) && (select!= 2) && (select!= 3) && (select!= 4)){
        printf("Insira um modo valido!\n");
        system("pause");
        system("cls");
        printf("1. Single player\n");
        printf("2. Multiplayer\n");
        printf("3. Regras\n");
        printf("4. Sair\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &select);
    }
    switch (select){
        case 1:
            singleplayer();
            break;

        case 2:
            multiplayer();
            break;

        case 3:
            regras();
            break;

        case 4:
            return 0;

        default:
            printf("Ocorreu um erro no programa!\n");
            break;
    }
}

int main(){
    gamemodeselect();
    return 0;
}
