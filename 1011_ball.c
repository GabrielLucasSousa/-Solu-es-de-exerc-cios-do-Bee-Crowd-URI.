#include <stdio.h>
#include <math.h>

int main(){
int r;
double volume;
scanf("%d", &r);

volume = (4.0/3) * 3.14159 * r * r * r;
printf("VOLUME = %.3lf\n", volume);
return 0;
}
