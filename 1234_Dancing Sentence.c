#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 51

void transformar_sentenca(char* sentenca) {
    int i = 0;
    int alternar_case = 1;

    while (sentenca[i] != '\0') {
        if (sentenca[i] == ' ') {
            putchar(' ');
        } else if (alternar_case) {
            putchar(toupper(sentenca[i]));
            alternar_case = 0;
        } else {
            putchar(tolower(sentenca[i]));
            alternar_case = 1;
        }
        i++;
    }
    putchar('\n');
}

int main() {
    char sentenca[MAX_LEN];
    
    while (fgets(sentenca, sizeof(sentenca), stdin)) {
        size_t len = strlen(sentenca);
        if (len > 0 && sentenca[len - 1] == '\n') {
            sentenca[len - 1] = '\0';
        }
        transformar_sentenca(sentenca);
    }

    return 0;
}
