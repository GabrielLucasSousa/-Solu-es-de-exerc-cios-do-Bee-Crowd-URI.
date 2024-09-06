#include <stdio.h>

int main(void) {
    int t, n, i;
    unsigned long long int Fib[61];

    Fib[0] = 0;
    Fib[1] = 1;

    for (i = 2; i <= 60; i++) {
        Fib[i] = Fib[i-1] + Fib[i-2];
    }

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, Fib[n]);
    }

    return 0;
}
