#include <stdio.h>

int main(){
	char nome[50];
	printf("Nome: ");
	//scanf("%s", &nome); sem espaços
	fgets(nome, 50, stdin); //pode conter espaços
	printf("Nome: %s", nome);
	return 0;
}
