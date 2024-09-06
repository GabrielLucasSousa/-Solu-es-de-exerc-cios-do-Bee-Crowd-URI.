#include <stdio.h>
int main(){
int number[5];
int i;
int par=0, imp=0 , pos=0, neg=0;

    for( i = 0; i < 5; i++){
  scanf("%d", &number[i]);

(number[i] % 2 == 0) ? par++ : imp++;
(number[i]> 0) ? pos++ : (number[i] < 0 ? neg++ : 0);
    }
printf("%d valor(es) par(es)\n", par );
printf("%d valor(es) impar(es)\n", imp);
printf("%d valor(es) positivo(s)\n", pos );
printf("%d valor(es) negativo(s)\n", neg) ;

    return 0;
}