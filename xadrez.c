#include <stdio.h>

int main() {
// ################## DECLARAÇÃO DE VARIÁVEIS
    int bispo, torre, dama;
    torre = 1;
    bispo = 1;

// ################# MOVIMENTAÇÃO DO BISPO COM *WHILE*

    //Impressão na tela sobre o que vai acontecer
    printf("Bispo está em c1 (Bc1.)\n");
    printf("Jogador move o bispo 5 casas para a diagonal direita, para g5 (Bg5).\n");
    printf("\n#1ª MOVIMENTAÇÃO DE PEÇA, BISPO:\n");


    while (bispo < 5) {
        printf("Movimento %d. ", bispo);
        printf("Cima, Direita;\n");
        bispo++;
    }
    
    printf("Bispo chegou em g5!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DA TORRE COM *DO-WHILE*

    // Impressão na tela sobre o que vai acontecer
    printf("Torre está em a1 (Ta1).\n");
    printf("Jogador move a torre 5 casas para a direita, para e1 (Te1).\n");
    printf("\n#2ª MOVIMENTAÇÃO DE PEÇA, TORRE:\n");


    do {
        printf("Movimento %d. ", torre);
        printf("Direita;\n");
        torre++;
    } while (torre < 5);

    printf("Torre chegou em e1!\n");
    printf("====================================\n\n");


// ################# MOVIMENTAÇÃO DA DAMA COM *FOR*

    //Impressão na tela sobre o que vai acontecer

    printf("Dama está em h8 (Dh8).\n");
    printf("Jogador move a dama 8 casas para a esquerda, para a8 (Da8).\n");
    printf("\n#3ª MOVIMENTAÇÃO DE PEÇA, DAMA:\n");

    for(dama = 1; dama < 8; dama++){
        printf("Movimento %d. ", dama);
        printf("Esquerda;\n");
    };

    printf("Dama chegou em a8!\n");
    printf("====================================\n\n");

    return 0;
}
