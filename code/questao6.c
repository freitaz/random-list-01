#include <stdio.h>
int main(){
	int i;
	printf("Números divididos por 11 com resto 5 no intervalo de 1000 até 1999:\n\n");
	for(i=1000;i<2000;i++){
		if (i%11==5){
			printf("%d ",i);
			}
		}
	printf("\n");
	return 0;
	}
