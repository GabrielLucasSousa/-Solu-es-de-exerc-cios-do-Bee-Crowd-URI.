#include <stdio.h>

int main() {
    int N, posicao, menor;
    scanf("%d", &N);
    
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    menor = X[0];
    posicao = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}

