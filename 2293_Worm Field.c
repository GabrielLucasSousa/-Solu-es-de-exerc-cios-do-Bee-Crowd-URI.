#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matriz[N][M];
    int soma_linhas[N];
    int soma_colunas[M];
    for (int j = 0; j < M; ++j) {
        soma_colunas[j] = 0;
    }
    for (int i = 0; i < N; ++i) {
        soma_linhas[i] = 0;
        for (int j = 0; j < M; ++j) {
            scanf("%d", &matriz[i][j]);
            soma_linhas[i] += matriz[i][j];
            soma_colunas[j] += matriz[i][j];
        }
    }
    int max_soma_linhas = soma_linhas[0];
    for (int i = 1; i < N; ++i) {
        if (soma_linhas[i] > max_soma_linhas) {
            max_soma_linhas = soma_linhas[i];
        }
    }
    int max_soma_colunas = soma_colunas[0];
    for (int j = 1; j < M; ++j) {
        if (soma_colunas[j] > max_soma_colunas) {
            max_soma_colunas = soma_colunas[j];
        }
    }
    int resultado = max_soma_linhas > max_soma_colunas ? max_soma_linhas : max_soma_colunas;
    printf("%d\n", resultado);

    return 0;
}
