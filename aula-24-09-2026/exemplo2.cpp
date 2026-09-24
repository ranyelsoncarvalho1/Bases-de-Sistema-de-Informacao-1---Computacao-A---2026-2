#include <stdio.h>
//#include <math.h>

int main(){
	//algoritmo: entrada + processamento + saída
	//calcular a idade de uma pessoa;
	
	/*
	int idade;
	pr'intf("Idade: "); //19
	scanf("%d", &idade); // idade = 19;
	
	printf("Idade digitada: %d\n", idade); //19
	*/
	
	//declarar as variáveis
	//calcular a idade de uma pessoa;
	int anoAtual = 2026;
	int anoNascimento;
	int idade;
	
	//entrada
	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	//processamento
	idade = anoAtual - anoNascimento;
	
	//saída
	printf("Idade: %d", idade);
			
	return 0;
}
