#include <stdio.h>
int main(){
	int soma_positivos, qtd_negativos, soma_pares;
	int valores[50];
	int i;
	soma_positivos=0;
	qtd_negativos=0;
	soma_pares=0;
	for(i=0;i<50;i++){
		printf("\nInforme o valor %d > ",i+1);
		scanf("%d",&valores[i]);
		}
	for(i=0;i<50;i++){
		if(valores[i]>=0){
			soma_positivos=soma_positivos+valores[i];
			}
		else{
			qtd_negativos++;
			}
		if(valores[i]%2==0){
			soma_pares=soma_pares+valores[i];
			}
		}
	printf("\nSoma dos positivos: %d\n",soma_positivos);
	printf("Número de negativos: %d\n",qtd_negativos);
	printf("Soma dos pares: %d\n",soma_pares);
	return 0;
	}
