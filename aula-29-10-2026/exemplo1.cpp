#include <stdio.h>

int main(){
	//imprimir de 100 a 1;
	int contador = 100;
	do {
		printf("%d\n", contador);
		contador--; //contador = contador - 1
	}while (contador >=1);
	
	return 0;
}
