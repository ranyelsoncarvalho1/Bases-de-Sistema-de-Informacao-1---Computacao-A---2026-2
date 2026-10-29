#include <stdio.h>

int main() {
    char cliente[100];
    char ambiente[100];

    float comprimento, largura, altura;
    float rendimento, precoLitro;

    float areaComprimento;
    float areaLargura;
    float areaTotal;
    float quantidadeTinta;
    float custo;

    printf("Nome do cliente: ");
    fgets(cliente, 100, stdin);

    printf("Nome do ambiente: ");
    fgets(ambiente, 100, stdin);

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    printf("Largura: ");
    scanf("%f", &largura);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Rendimento da tinta: ");
    scanf("%f", &rendimento);

    printf("Preco do litro: ");
    scanf("%f", &precoLitro);

    areaComprimento = 2 * comprimento * altura;
    areaLargura = 2 * largura * altura;

    areaTotal = areaComprimento + areaLargura;

    quantidadeTinta = areaTotal / rendimento;
    custo = quantidadeTinta * precoLitro;

    printf("\nCliente: %s", cliente);
    printf("Ambiente: %s", ambiente);

    printf("\nComprimento: %.2f m\n", comprimento);
    printf("Largura: %.2f m\n", largura);
    printf("Altura: %.2f m\n", altura);

    printf("\nArea total das paredes: %.2f m2\n", areaTotal);
    printf("Quantidade estimada de tinta: %.2f litros\n", quantidadeTinta);
    printf("Custo estimado: R$ %.2f\n", custo);

    return 0;
}
