/* 
INÍCIO

// Definir número de casas para cada peça
torreCasas = 5
bispoCasas = 5
rainhaCasas = 8


// Movimento da Torre (for)
PARA i DE 1 ATÉ torreCasas FAÇA
    IMPRIMIR "Direita"
FIM PARA


// Movimento do Bispo (while)
i = 1
ENQUANTO i ≤ bispoCasas FAÇA
    IMPRIMIR "Cima Direita"
    i = i + 1
FIM ENQUANTO


// Movimento da Rainha (do-while)
i = 1
REPITA
    IMPRIMIR "Esquerda"
    i = i + 1
ATÉ i > rainhaCasas

FIM

*/


#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; 

    // Movimento da TORRE 
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO 
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da RAINHA 
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}

