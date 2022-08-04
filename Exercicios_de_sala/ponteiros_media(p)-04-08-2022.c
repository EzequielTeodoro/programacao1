#include <stdio.h>
#include <stdlib.h>

      int main(){
      int *vet, i, soma= 0;
      vet= malloc(3*sizeof(int));
      
      for (i=0; i<3; i++){
           printf("Digite valor: ");
           scanf("%d", &vet[i]);
      }

      for (i=0; i<3; i++){
           soma = soma + vet[i];
      }
      printf("média: %d\n", soma/3);
    
}
   
     
    
     
