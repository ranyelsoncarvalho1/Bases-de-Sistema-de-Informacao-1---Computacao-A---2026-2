#include <stdio.h>

int main(){
	int op;
	float valor, saldo= 0;
	
	do{
		printf("1 - deposito\n");
		printf("2 - saque\n");
		printf("3 - consultar saldo\n");
		printf("4 - sair\n");
		printf("escolha uma opcao: ");
		scanf("%d", &op);
		switch (op){
			case 1: //deposito
				printf("informe o valor: ");
				scanf("%f", &valor);
				if(valor <0){
					printf("informe um valor valido\n");
				} else {
					saldo+=valor; //acumulador
				}
				break;
			case 2: //saque
				printf("informe o valor: ");
				scanf("%f", &valor);
				if (valor<=0){
					printf("saque invalido\n");
				} else if (valor > saldo){
					printf("saldo insuficiente\n");
				} else {
					saldo-= valor; //retirada
				}
				break;
		case 3: //consultar saldo
			printf("saldo: %.2f\n", saldo);
			break;
		case 4: //sair
			printf("encerrar\n");
			break;
		default:
			printf("opcao invalida\n");
			break;
		}
	}while(op!=4);
	
	return 0;
}
