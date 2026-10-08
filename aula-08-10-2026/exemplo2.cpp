#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//estruturas condicionais
	
	float n1 = 1;
	float n2 = 15;
	
	if (n1 >= n2) { //se
		printf("n1 é maior");
	} else { //senão
		printf("n2 é maior\n");
	}
	
	if(n2 == 2){
		printf("n2 possui valor 2\n");
	}
	
	
	return 0;
	
}
