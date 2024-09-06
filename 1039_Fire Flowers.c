#include <stdio.h>
#include <math.h>

int main() {
    int R1, X1, Y1, R2, X2, Y2;

    while (scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF) {

        double distancia = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));


        if (distancia + R2 <= R1) {
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }
    }

    return 0;
}
