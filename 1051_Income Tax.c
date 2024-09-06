#include <stdio.h>

int main() {
    float s, i, p = 0;
    scanf("%f", &s);

    if (s <= 2000) {

        printf("Isento\n");
    } else if (s <= 3000) {

        p = (s - 2000) * 0.08;
        printf("R$ %.2f\n", p);
    } else if (s <= 4500) {

        p = (1000 * 0.08) + (s - 3000) * 0.18;
        printf("R$ %.2f\n", p);
    } else {

        p = (1000 * 0.08) + (1500 * 0.18) + (s - 4500) * 0.28;
        printf("R$ %.2f\n", p);
    }

    return 0;
}
