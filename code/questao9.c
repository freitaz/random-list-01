#include <stdio.h>

typedef struct{
	char nome[40];
	float compra;
	float pagamento;
	}cliente;

int main(){
	cliente clientes[10];
	int i;
	float faturamento;
	faturamento=0;
	for(i=0;i<10;i++){
		printf("\nDigite o nome do cliente %d > ",i+1);
		fgets(clientes[i].nome,40,stdin);
		printf("\nDigite o valor da compra do cliente %d > ",i+1);
		scanf("%f\n",&clientes[i].compra);
		if(clientes[i].compra>=30){
			clientes[i].pagamento=clientes[i].compra*0.8;
			}
		else{
			clientes[i].pagamento=clientes[i].compra*0.85;
			}
		}
	printf("\n");
	for(i=0;i<10;i++){
		printf("\nCliente: %s",clientes[i].nome);
		printf("Valor da compra: %.2f reais\n",clientes[i].compra);
		printf("Valor pago: %.2f reais\n",clientes[i].pagamento);
		faturamento=clientes[i].pagamento+faturamento;
		}
	printf("\nFaturamento da loja: %.2f reais\n",faturamento);
	return 0;
	}
