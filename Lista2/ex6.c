#include <stdio.h>

int main() {
    int codigo;
    float salario, percentual, aumento, novoSalario;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    switch (codigo) {
        case 1:
            printf("\nCargo: Escriturario\n");
            percentual = 50;
            break;

        case 2:
            printf("\nCargo: Secretario\n");
            percentual = 35;
            break;

        case 3:
            printf("\nCargo: Caixa\n");
            percentual = 20;
            break;

        case 4:
            printf("\nCargo: Gerente\n");
            percentual = 10;
            break;

        case 5:
            printf("\nCargo: Diretor\n");
            percentual = 0;
            break;

        default:
            printf("Codigo invalido.\n");
            return 0;
    }

    aumento = salario * percentual / 100;
    novoSalario = salario + aumento;

    printf("Salario atual: R$ %.2f\n", salario);
    printf("Percentual de aumento: %.2f%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
