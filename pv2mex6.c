#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

#define LINHAS_BINGO 5
#define COLUNAS_BINGO 5
#define MIN_NUMERO 0
#define MAX_NUMERO 99

void preencheBingo(int cartela[LINHAS_BINGO][COLUNAS_BINGO]) {
    int numerosUsados[MAX_NUMERO + 1] = {0}; /
    int i, j;
    int numGerado;

    srand(time(NULL));

    for (i = 0; i < LINHAS_BINGO; i++) {
        for (j = 0; j < COLUNAS_BINGO; j++) {
            do {
                numGerado = rand() % (MAX_NUMERO - MIN_NUMERO + 1) + MIN_NUMERO;
            } while (numerosUsados[numGerado] == 1); 

            cartela[i][j] = numGerado;
            numerosUsados[numGerado] = 1; 
        }
    }
}

void imprimeMatriz(int matriz[LINHAS_BINGO][COLUNAS_BINGO], int nl, int nc) {
    int i, j;
    printf("\n--- Cartela de Bingo ---\n");
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            printf("%02d ", matriz[i][j]); 
        }
        printf("\n");
    }
    printf("------------------------\n");
}

int main() {
    int minhaCartela[LINHAS_BINGO][COLUNAS_BINGO];

    preencheBingo(minhaCartela);
    imprimeMatriz(minhaCartela, LINHAS_BINGO, COLUNAS_BINGO);

    return 0;
}
