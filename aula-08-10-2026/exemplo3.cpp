#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//estruturas condicionais
	
	float n1;
	printf("Digite o número: ");
	scanf("%f", &n1);
	
	if(n1 >0){
		printf("Número positivo");
	} else if (n1 < 0){
		printf("Número negativo");
	} else {
		printf("Número zero");
	}
	
	
	return 0;
	
}
