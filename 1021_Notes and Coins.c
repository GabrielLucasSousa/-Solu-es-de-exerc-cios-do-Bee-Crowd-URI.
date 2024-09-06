#include <stdio.h>

int caixa(int salario_centavos);

int main() {
    float salario;
    scanf("%f", &salario);

    int salario_centavos = (int)(salario * 100 + 0.5);
    caixa(salario_centavos);
    return 0;
}

int caixa(int salario) {
    int nota_100 = salario / 10000;
    salario -= nota_100 * 10000;

    int nota_50 = salario / 5000;
    salario -= nota_50 * 5000;

    int nota_20 = salario / 2000;
    salario -= nota_20 * 2000;

    int nota_10 = salario / 1000;
    salario -= nota_10 * 1000;

    int nota_5 = salario / 500;
    salario -= nota_5 * 500;

    int nota_2 = salario / 200;
    salario -= nota_2 * 200;

    int moeda_1 = salario / 100;
    salario -= moeda_1 * 100;

    int moeda_50 = salario / 50;
    salario -= moeda_50 * 50;

    int moeda_25 = salario / 25;
    salario -= moeda_25 * 25;

    int moeda_10 = salario / 10;
    salario -= moeda_10 * 10;

    int moeda_05 = salario / 5;
    salario -= moeda_05 * 5;

    int moeda_01 = salario;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_05);
    printf("%d moeda(s) de R$ 0.01\n", moeda_01);

    return 0;
}
