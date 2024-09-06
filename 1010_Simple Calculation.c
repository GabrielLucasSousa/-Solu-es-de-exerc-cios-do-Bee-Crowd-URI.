#include <stdio.h>
int main(){
int a, b;
int x, y;
float valor1, valor2, temp;

scanf("%d %d %f", &a, &b, &valor1);
scanf("%d %d %f", &x, &y, &valor2);

temp = ((b * valor1) + (y * valor2));

printf("VALOR A PAGAR: R$ %.2f\n", temp);
return 0;

}
