#include <stdio.h>
int main(){
int inicio_jogo, final_jogo,  tempo = 0;

scanf("%d %d", &inicio_jogo, &final_jogo);

if(inicio_jogo < final_jogo){ 
     tempo =  final_jogo - inicio_jogo ;
 } else if (inicio_jogo > final_jogo){
     tempo = 24 - inicio_jogo + final_jogo;
  } else {tempo = 24;
  }
printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}