#include <stdio.h>

int main() {
    int N, J, Z;
    int conjunto = 1; 

    while (1) {
        scanf("%d", &N);

        if (N == 0)
            break;

        printf("Teste %d\n", conjunto);

        int diferenca_anterior = 0; 

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &J, &Z);
            int diferenca = J - Z + diferenca_anterior; 
            printf("%d\n", diferenca);
            diferenca_anterior = diferenca; 
        }
        
        printf("\n"); 
        conjunto++;
    }

    return 0;
}

