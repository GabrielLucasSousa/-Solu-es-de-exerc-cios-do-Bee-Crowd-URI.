#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;


    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);


    int duracao_minutos = (hora_final * 60 + minuto_final) - (hora_inicial * 60 + minuto_inicial);


    if (duracao_minutos <= 0) {
        duracao_minutos += 24 * 60;
    }


    int duracao_horas = duracao_minutos / 60;
    int duracao_minutos_restantes = duracao_minutos % 60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos_restantes);

    return 0;
}
