#include <stdio.h>
int main() {
  int valor, maior, menor;
  long int valor;
  printf("Insira a produção diária > ");
  scanf("%d",&valor);
  maior=valor;
  menor=valor;
  soma=valor;
  printf("Insira a produção diária > ");
  scanf("%d",&valor);
  while (valor!=-1) {
    if (valor>maior) {
      maior=valor;
    }
    if (valor<menor) {
      menor=valor;
    }
    soma=soma+valor;
    printf("Insira a produção diária > ");
    scanf("%d",&valor);
  }
  printf("Maior produção diária: %d\n",maior);
  printf("Menor produção diária: %d\n",menor);
  printf("Média diária: %d\n", soma/365);
  return 0;
}
