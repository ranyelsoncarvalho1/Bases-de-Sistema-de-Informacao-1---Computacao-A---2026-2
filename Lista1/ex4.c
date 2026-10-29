#include <stdio.h>
#include <math.h>

int main() {
    char percurso[100];
    double x1, y1, x2, y2;
    double distancia;

    printf("Nome do percurso: ");
    fgets(percurso, 100, stdin);

    printf("Coordenada X inicial: ");
    scanf("%lf", &x1);

    printf("Coordenada Y inicial: ");
    scanf("%lf", &y1);

    printf("Coordenada X final: ");
    scanf("%lf", &x2);

    printf("Coordenada Y final: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nPercurso: %s", percurso);

    printf("\nPonto inicial: (%.2lf, %.2lf)\n", x1, y1);
    printf("Ponto final: (%.2lf, %.2lf)\n", x2, y2);

    printf("\nDistancia entre os pontos: %.3lf unidades\n", distancia);

    return 0;
}
