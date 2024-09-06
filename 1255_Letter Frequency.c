#include <stdio.h>
#include <ctype.h>

#define ALFABETO 26

int main() {
    int N;
    scanf("%d", &N);
    getchar(); 

    for (int i = 0; i < N; i++) {
        char linha[201];
        int frequencia[ALFABETO] = {0};
        int maxFrequencia = 0;

        fgets(linha, sizeof(linha), stdin);

        for (int j = 0; linha[j] != '\0'; j++) {
            char c = tolower(linha[j]);
            if (c >= 'a' && c <= 'z') {
                int index = c - 'a';
                frequencia[index]++;
                if (frequencia[index] > maxFrequencia) {
                    maxFrequencia = frequencia[index];
                }
            }
        }

        for (int j = 0; j < ALFABETO; j++) {
            if (frequencia[j] == maxFrequencia) {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
