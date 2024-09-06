#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int largest_prime_leq(int x) {
    for (int i = x; i >= 2; --i) {
        if (is_prime(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int P1 = largest_prime_leq(N);
    int P2 = largest_prime_leq(M);


    int result = P1 * P2;

    printf("%d\n", result);

    return 0;
}
