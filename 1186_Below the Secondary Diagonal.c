#include <stdio.h>

int main() {
    char O;
    double M[12][12], soma = 0.0;
    int count = 0;

    scanf(" %c", &O);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 1; i < 12; i++) {
        for (int j = 12 - i; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
    }

    if (O == 'M') {
        soma /= count;
    }

    printf("%.1lf\n", soma);
    
    return 0;
}
