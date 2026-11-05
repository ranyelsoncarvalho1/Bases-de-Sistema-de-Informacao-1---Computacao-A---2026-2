#include <stdio.h>

int main(){
	//for: break e continue
	//while
	
	int i;
	
	//contagem de 1 a 10
	for(i = 1;i<=10;i++){
		if(i == 6){
			continue; //realizar uma interrupção
			printf("teste");
		}
		printf("%d\n", i);
	}
	
	return 0;
}
