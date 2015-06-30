#include <stdio.h>
int main(){
    FILE *arq;
    arq=fopen("assist.txt","w");
    int i;
    float altura=1.0;
    for (i = 0; i < 50; i++) {
      fprintf(arq, "%f\n",altura);
      if(i%3==0) fprintf(arq,"F\n");
      else fprintf(arq,"M\n");
      altura=altura+0.01;
      }
    fclose(arq);
    return 0;
}
