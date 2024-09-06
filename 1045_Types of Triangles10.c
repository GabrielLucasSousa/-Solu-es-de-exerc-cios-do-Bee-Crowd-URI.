#include <stdio.h>

int main() {
    double a, b, c;


    scanf("%lf %lf %lf", &a, &b, &c);


    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        double temp = b;
        b = c;
        c = temp;
    }


    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c)
            printf("TRIANGULO RETANGULO\n");
        if (a * a > b * b + c * c)
            printf("TRIANGULO OBTUSANGULO\n");
        if (a * a < b * b + c * c)
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}