#include <stdio.h>
int main() {
    int estudante(float media, float exame);
    float a, b, c, d, media;
    scanf("%f %f %f %f", &a, &b, &c, &d);
     
    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
     
    if (media >= 7) {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    } else if (media < 5) {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n"); 
    } else if (media >= 5 && media <= 6.9) {
        estudante(media, 0);
    }

    return 0;
}

int estudante(float media, float exame) {
    printf("Media: %.1f\n", media);
    printf("Aluno em exame.\n");
    scanf("%f", &exame);
    media = (media + exame) / 2;
    printf("Nota do exame: %.1f\n", exame);
    
    if (media >= 5) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    
    printf("Media final: %.1f\n", media);

    return 0;
}
