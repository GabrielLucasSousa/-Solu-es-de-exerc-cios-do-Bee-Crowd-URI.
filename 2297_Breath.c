#include <stdio.h>

int main() {
    int R; 
    int A, B; 
    int i, totalAldo = 0, totalBeto = 0; 

    int caso = 1;
    while (1) {
        scanf("%d", &R); 
        if (R == 0) 
            break;

        totalAldo = 0;
        totalBeto = 0;

        
        for (i = 0; i < R; i++) {
            scanf("%d %d", &A, &B);
            totalAldo += A;
            totalBeto += B;
        }

        
        if (totalAldo > totalBeto)
            printf("Teste %d\nAldo\n\n", caso);
        else
            printf("Teste %d\nBeto\n\n", caso);

        caso++; 
    }

    return 0;
}
