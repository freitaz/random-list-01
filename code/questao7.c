#include <stdio.h>

typedef struct{
	float altura;
	char sexo;
	}pessoa;

int main(){
	float maior_altura, menor_altura, media_turma, media_mulheres, soma_mulheres, soma_geral;
	int qtd_mulheres;
	pessoa alunos[50];
	int i;
	for(i=0;i<50;i++){
		printf("\nDigite a altura da pessoa %d > ",i+1);
		scanf("%f\n",&alunos[i].altura);
		printf("\nDigite o sexo da pessoa %d (M/F) > ",i+1);
		scanf("%c\n",&alunos[i].sexo);
		}
	maior_altura=alunos[0].altura;
	menor_altura=alunos[0].altura;
	soma_geral=alunos[0].altura;
	if (alunos[0].sexo=='F'){
		soma_mulheres=alunos[0].altura;
		qtd_mulheres=1;
		}
	else{
		soma_mulheres=0;
		qtd_mulheres=0;
		}
	for(i=1;i<50;i++){
		if(alunos[i].altura>maior_altura){
			maior_altura=alunos[i].altura;
			}
		if(alunos[i].altura<menor_altura){
			menor_altura=alunos[i].altura;
			}
		soma_geral=alunos[i].altura+soma_geral;
		if (alunos[i].sexo=='F'){
			soma_mulheres=alunos[i].altura+soma_mulheres;
			qtd_mulheres++;
			}
		}
	printf("\n\nMaior altura: %.2f\n",maior_altura);
	printf("Menor altura: %.2f\n",menor_altura);
	printf("Média de altura da turma: %.2f\n",soma_geral/50);
	printf("Média de altura das mulheres: %.2f\n",soma_mulheres/qtd_mulheres);
	return 0;
	}
