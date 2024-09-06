#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gerarSequenciaEspelho(int B, int E) {
    char *sequencia = malloc(2000000);
    if (sequencia == NULL) {
        printf("Erro de alocação de memória\n");
        return;
    }
    
    char *p = sequencia;
    
    for (int i = B; i <= E; i++) {
        p += sprintf(p, "%d", i);
    }
    
    int comprimento = p - sequencia;
    for (int i = 0; i < comprimento; i++) {
        putchar(sequencia[i]);
    }
    
    for (int i = comprimento - 1; i >= 0; i--) {
        putchar(sequencia[i]);
    }
    
    free(sequencia);
}

int main() {
    int C;
    scanf("%d", &C);
    
    for (int i = 0; i < C; i++) {
        int B, E;
        scanf("%d %d", &B, &E);
        gerarSequenciaEspelho(B, E);
        printf("\n");
    }

    return 0;
}
