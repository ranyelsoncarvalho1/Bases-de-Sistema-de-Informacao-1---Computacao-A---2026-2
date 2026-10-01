#include <stdio.h>

int main(){
    char nome_cliente[100];
    char nome_produto[100];
    
    int quantidade_produto;
    
    float produto_preco_normal;
    float produto_desconto;
    float produto_preco_desconto;
    
    float valor_total;
    float valor_total_final;
    
    printf("Por favor digite seu nome completo: ");
    fgets(nome_cliente, 100, stdin);
    
    printf("Por favor digite o nome do produto: ");
    fgets(nome_produto, 100, stdin);
    
    printf("Por favor digite a quantidade que voce pegou desse produto: ");
    scanf("%d", &quantidade_produto);
    
    printf("Favor digitar o preco unitario desse produto: ");
    scanf("%f", &produto_preco_normal);

    printf("Favor digitar o percentual de desconto do produto: ");
    scanf("%f", &produto_desconto);
    
    valor_total = quantidade_produto * produto_preco_normal;
    
    produto_preco_desconto = valor_total * produto_desconto / 100;
    
    valor_total_final = valor_total - produto_preco_desconto;
    
    printf("\n--- Dados da compra ---\n");
    printf("Cliente: %s", nome_cliente);
    printf("Produto: %s", nome_produto);
    printf("Valor da compra:  %.2f\n", valor_total);
    printf("Valor do desconto:  %.2f\n", produto_preco_desconto);
    printf("Valor final:  %.2f\n", valor_total_final);
    
    return 0;
}
