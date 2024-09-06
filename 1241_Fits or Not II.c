#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char A[1001], B[1001];
        scanf("%s %s", A, B); 
        
        int lenA = strlen(A);
        int lenB = strlen(B);
        
        
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(&A[lenA - lenB], B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    
    return 0;
}