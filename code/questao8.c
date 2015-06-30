#include <stdio.h>
int main(){
	int m, n, i;
	printf("Digite o valor inferior do intervalo (N) > ");
	scanf("%d",&n);
	printf("Digite o valor superior do intervalo (M) > ");
	scanf("%d",&m);
	printf("\n\nMúltiplos de 7 no intervalo:\n\n");
	for(i=n;i<m;i++){
		if(i%7==0){
			printf("%d ",i);
			}
		}
	printf("\n");
	return 0;
	}
