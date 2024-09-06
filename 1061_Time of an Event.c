#include <stdio.h>

int main() {
    char descricao_inicio[5], descricao_fim[5];
    int inicio_dia, inicio_hora, inicio_minuto, inicio_segundo;
    int fim_dia, fim_hora, fim_minuto, fim_segundo;
    int duracao_dias, duracao_horas, duracao_minutos, duracao_segundos;


    scanf("%s %d", descricao_inicio, &inicio_dia);
    scanf("%d : %d : %d", &inicio_hora, &inicio_minuto, &inicio_segundo);
    scanf("%s %d", descricao_fim, &fim_dia);
    scanf("%d : %d : %d", &fim_hora, &fim_minuto, &fim_segundo);


    int inicio_total_segundos = inicio_dia * 24 * 3600 + inicio_hora * 3600 + inicio_minuto * 60 + inicio_segundo;
    int fim_total_segundos = fim_dia * 24 * 3600 + fim_hora * 3600 + fim_minuto * 60 + fim_segundo;


    int duracao_total_segundos = fim_total_segundos - inicio_total_segundos;


    duracao_dias = duracao_total_segundos / (24 * 3600);
    duracao_total_segundos %= (24 * 3600);
    duracao_horas = duracao_total_segundos / 3600;
    duracao_total_segundos %= 3600;
    duracao_minutos = duracao_total_segundos / 60;
    duracao_segundos = duracao_total_segundos % 60;


    printf("%d dia(s)\n", duracao_dias);
    printf("%d hora(s)\n", duracao_horas);
    printf("%d minuto(s)\n", duracao_minutos);
    printf("%d segundo(s)\n", duracao_segundos);

    return 0;
}
