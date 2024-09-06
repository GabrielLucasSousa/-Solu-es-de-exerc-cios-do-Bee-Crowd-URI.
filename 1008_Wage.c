#include<stdio.h>
int main(){
    int a;
    double b, c, salario;
    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    salario = b*c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
