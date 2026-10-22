#include <stdio.h>

int main(){
	int numero, contador=2, soma=0;
	printf("Numero: ");
	scanf("%d", &numero);
	while(contador<=numero){
		if(contador % 2 == 0){
			soma+= contador;
		}
		contador++;
	}
	printf("Soma: %d", soma);
	return 0;
}
