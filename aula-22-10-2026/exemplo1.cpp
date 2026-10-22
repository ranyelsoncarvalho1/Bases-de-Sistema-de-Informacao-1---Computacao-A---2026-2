#include <stdio.h>

int main(){
	float nota, frequencia;
	nota = 0;
	frequencia = 70;
	//operador: E - lógico
	//operador: OU - lógico
	if(nota >= 7 || frequencia >=75){
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	
	return 0;
}
