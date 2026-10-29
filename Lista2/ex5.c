#include <stdio.h>

int main() {
    float salario, percentual, imposto, salarioFinal;
    int categoria;

    printf("Digite o salario: R$ ");
    scanf("%f", &salario);

    printf("Digite a categoria de tributacao: ");
    scanf("%d", &categoria);

    switch (categoria) {
        case 0:
            percentual = 0;
            break;

        case 1:
            percentual = 10;
            break;

        case 2:
            percentual = 15;
            break;

        case 3:
            percentual = 20;
            break;

        default:
            printf("Categoria invalida.\n");
            return 0;
    }

    imposto = salario * percentual / 100;
    salarioFinal = salario - imposto;

    printf("\nSalario original: R$ %.2f\n", salario);
    printf("Percentual aplicado: %.2f%%\n", percentual);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Salario apos a deducao: R$ %.2f\n", salarioFinal);

    return 0;
}
