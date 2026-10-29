#include <stdio.h>
#include <math.h>

int main() {
    char proprietario[100];
    double raio;
    double precoGrama, precoCerca;
    double area, comprimento;
    double custoGrama, custoCerca, custoTotal;
    double pi = 3.141592;

    printf("Nome do proprietario: ");
    fgets(proprietario, 100, stdin);

    printf("Raio do terreno: ");
    scanf("%lf", &raio);

    printf("Preco do m2 da grama: ");
    scanf("%lf", &precoGrama);

    printf("Preco do metro da cerca: ");
    scanf("%lf", &precoCerca);

    area = pi * pow(raio, 2);
    comprimento = 2 * pi * raio;

    custoGrama = area * precoGrama;
    custoCerca = comprimento * precoCerca;
    custoTotal = custoGrama + custoCerca;

    printf("\nProprietario: %s", proprietario);
    printf("Raio do terreno: %.2lf m\n", raio);

    printf("\nArea para instalacao da grama: %.2lf m2\n", area);
    printf("Quantidade de cerca necessaria: %.2lf m\n", comprimento);

    printf("\nCusto da grama: R$ %.2lf\n", custoGrama);
    printf("Custo da cerca: R$ %.2lf\n", custoCerca);
    printf("Custo total estimado: R$ %.2lf\n", custoTotal);

    return 0;
}
