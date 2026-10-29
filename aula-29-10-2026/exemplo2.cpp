#include <stdio.h>

int main(){
	int n;
	
	do{
		printf("numero: ");
		scanf("%d", &n);
		if (n % 2 == 0){
			printf("numero par. Tente novamente!\n");
		}
	}while(n% 2 == 0);
	printf("numero informado: %d", n);
	
	return 0;
}
