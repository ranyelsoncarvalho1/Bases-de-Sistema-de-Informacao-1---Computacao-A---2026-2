#include <stdio.h>

int main(){
	float saldo=100, saque;
	int contador =0;
	while(contador <=4){
		printf("saldo: %.2f\n", saldo);
		printf("saque: ", contador);
		scanf("%f", &saque);
		if(saque <=0){
			printf("valor invalido\n");
		} else if(saque >saldo){
			printf("saldo insuficiente\n");
		} else {
			saldo = saldo - saque; //saldo -=saque
			printf("saque realizado\n");
			contador = contador + 1;
		}
	}
	printf("saldo final: %.2f", saldo);
	return 0;
}
