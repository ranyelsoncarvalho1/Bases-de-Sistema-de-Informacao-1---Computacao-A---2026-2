#include <stdio.h>

int main() {
    char nome[100];
    int matricula;
    char turma;
    float nota1, nota2, nota3, media;

    printf("Nome do estudante: ");
    fgets(nome, 100, stdin);

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("Turma: ");
    scanf(" %c", &turma);

    printf("Nota da primeira avaliacao: ");
    scanf("%f", &nota1);

    printf("Nota da segunda avaliacao: ");
    scanf("%f", &nota2);

    printf("Nota da terceira avaliacao: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("\nAluno: %s", nome);
    printf("Matricula: %d\n", matricula);
    printf("Turma: %c\n", turma);

    printf("\nNota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media final: %.2f\n", media);

    return 0;
}
