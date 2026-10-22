//crie um programa que mostre na tela
//os número de 1 a 100.

#include <stdio.h>

int main(){
	int contador = 100;
	int soma = 0;
	while(contador >=1){
		printf("%d\n", contador);
		soma = soma + contador;
		contador--; //contador = contador-1
	}
	printf("Soma: %d\n", soma);
	return 0;
}
