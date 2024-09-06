#include <stdio.h>
int main(){
    char nome[20];
    double salario, total, x;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &total);

    x = (0.15 * total) + salario;
    printf("TOTAL = R$ %.2lf\n", x);
    return 0;
}