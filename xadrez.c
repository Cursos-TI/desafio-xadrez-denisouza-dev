#include <stdio.h>

int main() {

    // Simulação do movimento da Torre
    // A torre se move em linha reta — neste caso, 5 casas para a direita.
    // Estrutura usada: for
    printf("Movimento da Torre\n");

    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Simulação do movimento do Bispo
    // O bispo se move na diagonal — neste caso, 5 casas para cima e à direita.
    // Estrutura usada: while
    printf("\nMovimento do Bispo\n");

    int casasBispo = 5;
    int contador = 1;
    while (contador <= casasBispo) {
        printf("Casa %d: Cima e Direita\n", contador);
        contador++;
    }

    // Simulação do movimento da Rainha
    // A rainha pode se mover em qualquer direção — neste caso, 8 casas para a esquerda.
    // Estrutura usada: do-while
    printf("\nMovimento da Rainha\n");

    int casasRainha = 8;
    int movimento = 1;
    do {
        printf("Casa %d: Esquerda\n", movimento);
        movimento++;
    } while (movimento <= casasRainha);

    // Fim do programa
    printf("\nSimulacao concluida!\n");

    return 0;
}
