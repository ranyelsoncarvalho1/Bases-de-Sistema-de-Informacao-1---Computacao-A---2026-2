#include <stdio.h>

int main(){
	int linhas;
	
	printf("linhas: ");
	scanf("%d", &linhas);
	
	for(int i = 1; i<=linhas;i++){
		for (int j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
