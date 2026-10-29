#include <stdio.h>

int main() {
    char cliente[100];
    char produto[100];
    int quantidade;
    float preco, percentualDesconto;
    float valorCompra, desconto, valorFinal;

    printf("Nome do cliente: ");
    fgets(cliente, 100, stdin);

    printf("Nome do produto: ");
    fgets(produto, 100, stdin);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Preco unitario: ");
    scanf("%f", &preco);

    printf("Percentual de desconto: ");
    scanf("%f", &percentualDesconto);

    valorCompra = quantidade * preco;
    desconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - desconto;

    printf("\nCliente: %s", cliente);
    printf("Produto: %s", produto);
    printf("Quantidade adquirida: %d\n", quantidade);

    printf("\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Desconto concedido: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
