#include <stdio.h>

int main(){
	float peso, altura, imc;
	printf("peso: ");
	scanf("%f", &peso);
	printf("altura: ");
	scanf("%f", &altura);
	
	if(peso <=0 || altura <=0){
		printf("valor invalido");
		return 1;	
	}
	
	imc = peso / (altura * altura);
	printf("IMC: %.2f", imc);
	if(imc<18.5){
		printf("Abaixo do peso");
	} else if (imc >=18.5 && imc<=24.9){
		printf("Peso normal");
	} else if (imc >=25 && imc<=29.9){
		printf("Excesso de peso");
	} else if (imc >=30 && imc<=34.9){
		printf("Obesidade classe I");
	} else if(imc >=35 && imc<=39.9){
		printf("Obesidade classe II");
	} else {
		printf("Obesidade classe III");
	}
	
	return 0;
}
