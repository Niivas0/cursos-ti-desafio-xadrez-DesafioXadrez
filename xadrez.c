/* 
Requisitos funcionais
    Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
    Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
    Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
    Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
    Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. 
        Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. 
        Utilize linhas em branco para separar a saída de cada peça.
*/

#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}


// Função com loops aninhados para o Bispo 
void moverBispoComLoops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Cima - Direita\n");
        }
    }
}

// Função com loops complexos para o Cavalo
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima");
            } else {
                printf("Direita");
            }

            if (!(i == movimentos - 1 && j == 2)) {
                printf(" - ");
            }

            if (j > 2) {
                continue;
            }

            if (i < 0) {
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    // Movimento da TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispoComLoops(2, 2); 

    // Movimento da RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do CAVALO
    printf("\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
