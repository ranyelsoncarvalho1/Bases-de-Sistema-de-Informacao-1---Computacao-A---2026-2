#include <stdio.h>
#include <math.h>

int main(){
    char percurso[50];
    float x1, y1, x2, y2;
    float distancia;

    //entrada de dados
    printf("Informe o nome percurso: ");
    fgets(percurso, 50, stdin);

    printf("coordenada X inicial: ");
    scanf("%f", &x1);

    printf("coordenada Y inicial: ");
    scanf("%f", &y1);

    printf("coordenada X final: ");
    scanf("%f", &x2);

    printf("coordenada Y final: ");
    scanf("%f", &y2);

    //calcular a distância
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    //exibir os resultados:
    printf("\nPercurso: %s", percurso);

    printf("\nPonto Inicial: (%.2f, %.2f)\n", x1, y1);
    printf("\nPonto Final: (%.2f, %.2f)\n", x2, y2);

    printf("\nDistancia: %.2f", distancia);

    return 0;
}
