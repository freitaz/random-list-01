#include <stdio.h>
int main(){
	int maior, menor, soma, valor, i;
	printf("Digite o valor %d > ",1);
	scanf("%d",&valor);
	maior=valor;
	menor=valor;
	soma=valor;
	for (i=2;i<501;i++){
		printf("\nDigite o valor %d > ",i);
		scanf("%d",&valor);
		if (valor>maior){
			maior=valor;
			}
		if (valor<menor){
			menor=valor;
			}
		soma=soma+valor;
		}
	printf("\n\nMaior valor: %d\n",maior);
	printf("Menor valor: %d\n",menor);
	printf("Média: %f\n",(float)soma/500.0);
	return 0;
	}
