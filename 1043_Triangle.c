#include <stdio.h>
int main(){
float a, b, c, perimetro, area;
scanf("%f %f %f", &a, &b, &c);

if(a + b > c && a + c > b && c + b > a){
    perimetro=a + b + c;
    printf("Perimetro = %.1lf\n", perimetro);
}else{
area=(a+b)*c/2.0;
printf("Area = %.1lf\n", area);
 }
return 0;
}
