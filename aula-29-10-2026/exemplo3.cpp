#include <stdio.h>

int main(){
	//menu de opções: 1 - adição; 2 - subtração; 3 - sair
	int op;
	float num1, num2, resultado;
	do{
		printf("1 - adicao\n");
		printf("2 - subtracao\n");
		printf("3 - sair\n");
		//switch case
		printf("Escolha uma opcao: ");
		scanf("%d", &op);
		if(op>=1 && op<=2){
			printf("num1: ");
			scanf("%f", &num1);
			printf("num2: ");
			scanf("%f", &num2);		
		}
		switch(op){
			case 1:
				//printf("adicao");
				resultado = num1 + num2;
				printf("resultado: %.2f\n", resultado);
				break;
			case 2:
				//printf("subtracao");
				resultado = num1 - num2;
				printf("resultado: %.2f\n", resultado);
				break;
			case 3:
				printf("saindo...");
				break;
			default:
				printf("opcao invalida\n");				
		}
	}while (op!=3);
	return 0;
}
