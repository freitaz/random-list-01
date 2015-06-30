#include <stdio.h>
int main(){
	int a, i, n;
	n=0;
	for(i=1;i<6;i++){
		printf("Digite o valor %d de A > ",i);
		scanf("%d",&a);
		if (a<0){
			n++;
			}
		}
	printf("Número de valores negativos: %d\n",n);
	return 0;
	}
