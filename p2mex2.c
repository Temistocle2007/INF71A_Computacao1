#include <stdio.h>

void gerarTrianguloPascal(int n) {
    int pascal[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pascal[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &n);

    gerarTrianguloPascal(n);

    return 0;
}

