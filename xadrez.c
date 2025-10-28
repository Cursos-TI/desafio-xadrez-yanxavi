#include <stdio.h>

int main() {
// ################## DECLARAÇÃO DE VARIÁVEIS
    int bispo, torre, dama, cavalo, pecaJogador;
    cavalo = 1;
    torre = 1;
    bispo = 1;

    // VARIÁVEIS PARA NOTAÇÃO
    char casaNotacao;
    int numNotacao;

// ################# MOVIMENTAÇÃO DO BISPO COM *WHILE*
    //Impressão na tela sobre o que vai acontecer
    casaNotacao = 'd';
    numNotacao = 2;

    printf("BISPO está em c1 (Bc1). ");
    printf("Jogador move o bispo 5 casas para a diagonal direita, para g5 (Bg5).\n");
    printf("#1ª MOVIMENTAÇÃO DE PEÇA, BISPO:\n");

    while (bispo < 5) {
        printf("%d. ", bispo);
        printf("Cima, Direita(B%c%d);\n", casaNotacao++, numNotacao++);
        bispo++;
    }
    
    printf("Bispo chegou em g5!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DA TORRE COM *DO-WHILE*
    // Impressão na tela sobre o que vai acontecer
    casaNotacao = 'b';
    numNotacao = 1;
    printf("TORRE está em a1 (Ta1). ");
    printf("Jogador move a torre 5 casas para a direita, para e1 (Te1).\n");
    printf("#2ª MOVIMENTAÇÃO DE PEÇA, TORRE:\n");

    do {
        printf("%d. ", torre);
        printf("Direita(T%c%d);\n", casaNotacao++, numNotacao);
        torre++;
    } while (torre < 5);

    printf("Torre chegou em e1!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DA DAMA COM *FOR*
    //Impressão na tela sobre o que vai acontecer
    casaNotacao = 'g';
    numNotacao = 8;
    printf("DAMA está em h8 (Dh8). ");
    printf("Jogador move a dama 8 casas para a esquerda, para a8 (Da8).\n");
    printf("#3ª MOVIMENTAÇÃO DE PEÇA, DAMA:\n");

    for(dama = 1; dama < 8; dama++){
        printf("%d. ", dama);
        printf("Esquerda(D%c%d);\n", casaNotacao--, numNotacao);
    }

    printf("Dama chegou em a8!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DO CAVALO COM LOOP ALINHADO *WHILE E FOR*
    //Impressão na tela sobre o que vai acontecer  
    casaNotacao = 'c';
    numNotacao = 1;
    printf("CAVALO está em b1 (Cb1). ");
    printf("Jogador move O cavalo 3 vezes em 'L' para a direta, para e7 (Ce7).\n");
    printf("#4ª MOVIMENTAÇÃO DE PEÇA, CAVALO:\n");

    while(cavalo <= 3){
        int i;
        printf("Movimento %d. ", cavalo);

        for(i = 1; i <= 2; i++){
            printf("Cima, ");
        }
        printf("Direita(C%c%d);\n", casaNotacao++, numNotacao = numNotacao+2);
        cavalo++;
    }

    printf("Cavalo chegou em e7!\n");
    printf("====================================\n\n");


    return 0;
}
