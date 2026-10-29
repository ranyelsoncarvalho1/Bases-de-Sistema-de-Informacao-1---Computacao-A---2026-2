#include <stdio.h>

int main() {
    char cliente[100];
    char lanche[100];
    char bebida[100];

    int quantidadeLanche, quantidadeBebida;

    float precoLanche, precoBebida;
    float totalLanches, totalBebidas;
    float totalPedido, valorRecebido, troco;

    printf("Nome do cliente: ");
    fgets(cliente, 100, stdin);

    printf("Nome do lanche: ");
    fgets(lanche, 100, stdin);

    printf("Quantidade de lanches: ");
    scanf("%d", &quantidadeLanche);

    printf("Preco do lanche: ");
    scanf("%f", &precoLanche);

    getchar();

    printf("Nome da bebida: ");
    fgets(bebida, 100, stdin);

    printf("Quantidade de bebidas: ");
    scanf("%d", &quantidadeBebida);

    printf("Preco da bebida: ");
    scanf("%f", &precoBebida);

    printf("Valor recebido: ");
    scanf("%f", &valorRecebido);

    totalLanches = quantidadeLanche * precoLanche;
    totalBebidas = quantidadeBebida * precoBebida;

    totalPedido = totalLanches + totalBebidas;
    troco = valorRecebido - totalPedido;

    printf("\nPedido de %s", cliente);

    printf("\n%d %s", quantidadeLanche, lanche);
    printf("R$ %.2f cada\n", precoLanche);

    printf("%d %s", quantidadeBebida, bebida);
    printf("R$ %.2f cada\n", precoBebida);

    printf("\nTotal dos lanches: R$ %.2f\n", totalLanches);
    printf("Total das bebidas: R$ %.2f\n", totalBebidas);
    printf("Valor total do pedido: R$ %.2f\n", totalPedido);

    printf("\nValor recebido: R$ %.2f\n", valorRecebido);
    printf("Troco: R$ %.2f\n", troco);

    printf("\nObrigado pela preferencia, %s", cliente);

    return 0;
}
