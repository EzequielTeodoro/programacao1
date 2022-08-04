#include <stdio.h>
#include <stdlib.h>
      
float media_notas(int n)
{
      float *notas, media;
      int i;
      
      // criando o vetor:
      notas = malloc(n*sizeof(float));
      
      for(i=0; i<n; i++)
      {
           printf("Aluno %d:", i);
           scanf("%f", &notas[i]);
      }
      media = 0.0;
      for (i=0; i<n; i++){
          media += notas[i];
      }
      media = media/n;
     
      return media;
}
   
int main(){
      float m;
      m = media_notas(3);
      printf("media: %.2f\n", m);
}
