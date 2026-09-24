#include <stdio.h>
#include <math.h>

int main(){
	//fazer o sitema para calcular raiz quadrada
	float numero; //float - ponto flutuante (2.36)
	float resultado;
	
	//o usuário escolhe o número
	printf("Informe o numero: ");
	scanf("%f", &numero);
	
	resultado = sqrt(numero);
	printf("Resultado: %.0f", resultado);
	
	return 0;
}
