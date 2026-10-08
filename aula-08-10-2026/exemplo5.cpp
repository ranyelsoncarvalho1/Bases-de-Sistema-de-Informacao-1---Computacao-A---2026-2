#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//estruturas condicionais
	
	//menu de opções
	int op;
	printf("Escolha uma opção: \n1 - Domingo;\n 2 - Segunda-Feira\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terça-feira");
			break;
		default:
			printf("Opção inválida");
	}
	
	return 0;
	
}
