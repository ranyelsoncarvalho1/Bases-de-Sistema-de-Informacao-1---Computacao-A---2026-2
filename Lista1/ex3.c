#include <stdio.h>

int main() {
    char motorista[100];
    char destino[100];
    float distancia, consumo, precoCombustivel, pedagios;
    float litros, custoCombustivel, custoTotal, custoKm;

    printf("Nome do motorista: ");
    fgets(motorista, 100, stdin);

    printf("Cidade de destino: ");
    fgets(destino, 100, stdin);

    printf("Distancia da viagem: ");
    scanf("%f", &distancia);

    printf("Consumo do veiculo: ");
    scanf("%f", &consumo);

    printf("Preco do combustivel: ");
    scanf("%f", &precoCombustivel);

    printf("Valor dos pedagios: ");
    scanf("%f", &pedagios);

    litros = distancia / consumo;
    custoCombustivel = litros * precoCombustivel;
    custoTotal = custoCombustivel + pedagios;
    custoKm = custoTotal / distancia;

    printf("\nMotorista: %s", motorista);
    printf("Destino: %s", destino);
    printf("Distancia da viagem: %.2f km\n", distancia);

    printf("\nCombustivel necessario: %.2f litros\n", litros);
    printf("Custo com combustivel: R$ %.2f\n", custoCombustivel);
    printf("Custo com pedagios: R$ %.2f\n", pedagios);
    printf("Custo total da viagem: R$ %.2f\n", custoTotal);
    printf("Custo medio por quilometro: R$ %.2f\n", custoKm);

    return 0;
}
