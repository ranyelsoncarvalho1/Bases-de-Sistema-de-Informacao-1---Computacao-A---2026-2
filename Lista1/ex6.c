#include <stdio.h>

int main() {
    char atividade[100];
    char sala;
    int tempoTotal;
    int horas, minutos, segundos;

    printf("Nome da atividade: ");
    fgets(atividade, 100, stdin);

    printf("Sala: ");
    scanf(" %c", &sala);

    printf("Duracao em segundos: ");
    scanf("%d", &tempoTotal);

    horas = tempoTotal / 3600;
    minutos = (tempoTotal % 3600) / 60;
    segundos = tempoTotal % 60;

    printf("\nAtividade: %s", atividade);
    printf("Sala: %c\n", sala);
    printf("Tempo registrado: %d segundos\n", tempoTotal);

    printf("\nDuracao da atividade: %02d:%02d:%02d\n",
           horas, minutos, segundos);

    return 0;
}
