#include <stdio.h>

int main() {
    int n;
    char hex[3];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", hex);
        printf("%c", (char)strtol(hex, NULL, 16));
    }

    printf("\n");

    return 0;
}
