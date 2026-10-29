#include <stdio.h>

int main(){
	int fatorial=1, numero;
	printf("numero: ");
	scanf("%d", &numero);
	for(int i = numero; i>=1;i--){
		fatorial = fatorial * i;
	}
	printf("total: %d", fatorial);
	return 0;
}
