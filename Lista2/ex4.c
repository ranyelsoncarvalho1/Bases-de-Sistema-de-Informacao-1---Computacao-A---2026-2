#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1) &&
        (lado1 == lado2) &&
        (lado2 == lado3)) {

        printf("Triangulo valido.\n");
        printf("Tipo: Equilatero.\n");
    }
    else if ((lado1 + lado2 > lado3) &&
             (lado1 + lado3 > lado2) &&
             (lado2 + lado3 > lado1) &&
             (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)) {

        printf("Triangulo valido.\n");
        printf("Tipo: Isosceles.\n");
    }
    else if ((lado1 + lado2 > lado3) &&
             (lado1 + lado3 > lado2) &&
             (lado2 + lado3 > lado1)) {

        printf("Triangulo valido.\n");
        printf("Tipo: Escaleno.\n");
    }
    else {
        printf("Os valores nao formam um triangulo valido.\n");
    }

    return 0;
}
