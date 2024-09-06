#include <stdio.h>
int main(){
    int horas, velo;
    float litros, km;

scanf("%d", &horas);
scanf("%d", &velo);

    km = 12;

    litros = horas * velo / km;

    printf("%.3f\n", litros);
    return 0;
}
