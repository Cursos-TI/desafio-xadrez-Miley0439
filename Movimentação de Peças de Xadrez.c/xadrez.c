#include <stdio.h>

// ---------------------------------------------
// Função recursiva para o movimento da Torre
// Movimento: horizontal (Direita)
// ---------------------------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------------------------------------------
// Função recursiva para o movimento da Rainha
// Movimento: horizontal (Esquerda)
// ---------------------------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------------------------------------------
// Função recursiva para o movimento do Bispo
// Movimento: diagonal (Cima Direita)
// ---------------------------------------------
void moverBispo(int passos) {
    if (passos <= 0) return;
    printf("Cima Direita\n");
    moverBispo(passos - 1);
}

// ---------------------------------------------
// Movimento do Cavalo com loops aninhados
// Movimento: duas casas para cima, uma para a direita
// ---------------------------------------------
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    // Loop para movimentos verticais (Cima)
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n");
    }

    // Loop para movimento horizontal (Direita)
    for (int j = 0; j < movimentosHorizontais; j++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha extra para separar saída
}

// ---------------------------------------------
// Função principal
// ---------------------------------------------
int main() {
    // Quantidade de movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}

