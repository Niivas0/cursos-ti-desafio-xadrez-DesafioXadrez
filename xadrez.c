/* 
    Início

    Definir casasTorre como 5
    Definir casasBispo como 5
    Definir casasRainha como 8

    Escrever "Movimento da Torre:"
    Para i de 1 até casasTorre faça
        Escrever "Direita"
    FimPara

    Escrever "Movimento do Bispo:"
    Para i de 1 até casasBispo faça
        Escrever "Cima, Direita"
    FimPara

    Escrever "Movimento da Rainha:"
    Para i de 1 até casasRainha faça
        Escrever "Esquerda"
    FimPara

    Escrever "Movimento do Cavalo:"
    Definir movimentosParaBaixo como 2
    Definir movimentosParaEsquerda como 1

    Para movimento de 0 até menor que 1 faça
        Para j de 0 até menor que movimentosParaBaixo faça
            Escrever "Baixo -"
        FimPara

        Para k de 0 até menor que movimentosParaEsquerda faça
            Escrever "Esquerda"
        FimPara

        Escrever nova linha
    FimPara

Fim

    
    
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
    for (i = 1; i <= casasBispo; i++) {
        printf("Cima, Direita\n");
    }

    // Movimento da RAINHA 
    printf("\nMovimento da Rainha:\n");
    for (i = 1; i <= casasRainha; i++) {
        printf("Esquerda\n");
    }

    // Movimento do CAVALO
    printf("\nMovimento do Cavalo:\n");

    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;

    // Loop externo
    for (int movimento = 0; movimento < 1; movimento++) {
        // Loop interno 1: duas casas para baixo
        for (int j = 0; j < movimentosParaBaixo; j++) {
            printf("Baixo");
            printf(" - ");
        }

        // Loop interno 2: uma casa para esquerda
        for (int k = 0; k < movimentosParaEsquerda; k++) {
            printf("Esquerda");
        }

        printf("\n"); 
    }

    return 0;
}
