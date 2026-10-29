#include <stdio.h>

int main() {
    char funcionario[100];
    int codigo;
    float valorHora;
    float horasNormais, horasExtras;
    float pagamentoNormal, pagamentoExtra;
    float salarioBruto, desconto, salarioLiquido;

    printf("Nome do funcionario: ");
    fgets(funcionario, 100, stdin);

    printf("Codigo funcional: ");
    scanf("%d", &codigo);

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    printf("Horas normais trabalhadas: ");
    scanf("%f", &horasNormais);

    printf("Horas extras: ");
    scanf("%f", &horasExtras);

    pagamentoNormal = horasNormais * valorHora;
    pagamentoExtra = horasExtras * (valorHora * 1.50);

    salarioBruto = pagamentoNormal + pagamentoExtra;
    desconto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - desconto;

    printf("\nFuncionario: %s", funcionario);
    printf("Codigo: %d\n", codigo);

    printf("\nPagamento pelas horas normais: R$ %.2f\n", pagamentoNormal);
    printf("Pagamento pelas horas extras: R$ %.2f\n", pagamentoExtra);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto realizado: R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
