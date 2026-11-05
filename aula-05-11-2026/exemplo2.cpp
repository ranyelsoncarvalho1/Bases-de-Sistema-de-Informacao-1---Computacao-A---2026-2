#include <stdio.h>

int main(){
	//for aninhado (matriz: linha e coluna)
	//i j
	int i, j;
	for(i = 1; i<=3;i++){
		for(j = 1; j<=5;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
