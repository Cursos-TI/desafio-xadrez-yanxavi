#include <stdio.h>

// ################## MOVIMENTAÇÃO DA TORRE
void voidTorre(int i, int c){// VARIÁVEL I FUNCIONA COMO LIMITADOR DO LOOP, E A C FUNIONA COMO CASA DA NOTAÇÃO ALGÉBRICA
    if (i < 5){
        printf("%d. Direita", i);
        printf("(T%c1);\n", c);
        voidTorre(i = i+1, c = c+1);
    }
}

// ################## MOVIMENTAÇÃO DO BISPO
void voidBispo(int i, int n, char c){ // variável C e N funcionam para a NOTAÇÃO ALGÉBRICA
    if (i < 5){
        printf("%d. Cima, ", i);
        if (i < 5){
             printf("Direita");
        }
        printf("(B%c%d);\n", c, n);
        voidBispo(i = i+1, n = n + 1, c = c+1);
    }
}

// ################## MOVIMENTAÇÃO DA DAMA
void voidDama(int i, char c){ // VARIÁVEL I FUNCIONA COMO LIMITADOR DO LOOP, C FUNIONA COMO CASA DA NOTAÇÃO ALGÉBRICA
    if (i < 8){
        printf("%d. Esquerda", i);
        printf("(D%c8);\n", c);
        voidDama(i = i+1, c = c-1);
    }
}


int main() {
// ################## DECLARAÇÃO DE VARIÁVEIS
    int bispo, torre, dama, cavalo, pecaJogador;
    cavalo = 1;
    torre = 1;
    bispo = 1;
    dama = 1;

    // VARIÁVEIS PARA NOTAÇÃO
    char casaNotacao;
    int numNotacao;

// ################# MOVIMENTAÇÃO DO BISPO
    //Impressão na tela sobre o que vai acontecer
    printf("BISPO está em c1 (Bc1). ");
    printf("Jogador move o bispo 5 casas para a diagonal direita, para g5 (Bg5).\n");
    printf("#1ª MOVIMENTAÇÃO DE PEÇA, BISPO:\n");

    casaNotacao = 'd';
    numNotacao = 2;
    voidBispo(bispo, numNotacao, casaNotacao);
    
    printf("Bispo chegou em g5!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DA TORRE
    // Impressão na tela sobre o que vai acontecer

    printf("TORRE está em a1 (Ta1). ");
    printf("Jogador move a torre 5 casas para a direita, para e1 (Te1).\n");
    printf("#2ª MOVIMENTAÇÃO DE PEÇA, TORRE:\n");

    casaNotacao = 'b';
    voidTorre(torre, casaNotacao);


    printf("Torre chegou em e1!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DA DAMA
    //Impressão na tela sobre o que vai acontecer
    printf("DAMA está em h8 (Dh8). ");
    printf("Jogador move a dama 8 casas para a esquerda, para a8 (Da8).\n");
    printf("#3ª MOVIMENTAÇÃO DE PEÇA, DAMA:\n");

    casaNotacao = 'g';
    voidDama(dama, casaNotacao);

    printf("Dama chegou em a8!\n");
    printf("====================================\n\n");

// ################# MOVIMENTAÇÃO DO CAVALO COM LOOP ALINHADO *WHILE E FOR*
    //Impressão na tela sobre o que vai acontecer  
    casaNotacao = 'c';
    numNotacao = 1;
    printf("CAVALO está em b1 (Cb1). ");
    printf("Jogador move O cavalo 3 vezes em 'L' para a direta, para e7 (Ce7).\n");
    printf("#4ª MOVIMENTAÇÃO DE PEÇA, CAVALO:\n");

    while(cavalo < 4){ // define um loop externo, enquato a variável "cavalo" seja menor que 4
        int i; // variável para controle do loop interno
        printf("Movimento %d. ", cavalo); // usa a variável "cavalo" como contagem de movimentos4

        for(i = 1; i < 3; i++){ // define "i" inicialmenete como 1. Enquanto i é menor que 3, o loop interno é feito. quando terminado, o valor de "i" é resetado por conta do loop externo
            printf("Cima, ");

            if (i == 2){ // quando "i" chega em 2, é imprimido no terminal o movimento horizontal do cavalo
                printf("Direita(C%c%d);\n", casaNotacao++, numNotacao += 2);
                cavalo++; // adiciona 1 no valor da var. "cavalo"
            }
        }
    }

    printf("Cavalo chegou em e7!\n");
    printf("====================================\n\n");

    return 0;
}