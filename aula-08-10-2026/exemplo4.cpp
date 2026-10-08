#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//estruturas condicionais
	
	float n1, n2;
	printf("Digite o número N1: ");
	scanf("%f", &n1);
	
	printf("Digite o número N2: ");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("N1 é maior");
	} else if (n1 < n2){
		printf("N2 é maior");
	} else {
		printf("São iguais");
	}
	
	
	return 0;
	
}
