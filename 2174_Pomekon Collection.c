#include <stdio.h>
#include <string.h>

#define MAX_POMEKONS 151
#define MAX_NAME_LENGTH 1000

typedef struct {
    char names[MAX_POMEKONS][MAX_NAME_LENGTH];
    int count;
} UniquePomekons;

int contains(UniquePomekons *uniquePomekons, const char *name) {
    for (int i = 0; i < uniquePomekons->count; ++i) {
        if (strcmp(uniquePomekons->names[i], name) == 0) {
            return 1;
        }
    }
    return 0;
}

void addPomekon(UniquePomekons *uniquePomekons, const char *name) {
    if (!contains(uniquePomekons, name)) {
        strcpy(uniquePomekons->names[uniquePomekons->count], name);
        uniquePomekons->count++;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    UniquePomekons uniquePomekons;
    uniquePomekons.count = 0;
    
    char name[MAX_NAME_LENGTH];
    
    for (int i = 0; i < N; ++i) {
        scanf("%s", name);
        addPomekon(&uniquePomekons, name);
    }
    
    int faltando = MAX_POMEKONS - uniquePomekons.count;
    
    printf("Falta(m) %d pomekon(s).\n", faltando);
    
    return 0;
}
