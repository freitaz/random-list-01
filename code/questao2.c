#include <stdio.h>

int main(){
	int i,n;
	double resultado=0;
	printf("Digite o valor de N > ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		resultado=resultado+1.0/((float)(i+i));
		}
	printf("Soma da série: %lf\n",resultado);
	return 0;
	}
