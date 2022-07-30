#include <stdio.h>
#include <stdlib.h>

int main(){
   int *idade;
   idade=malloc(sizeof(int));
   printf("Digite sua idade: " );
   scanf("%d", idade);
   printf("end: %p\n", idade);
   printf("valor: %d\n", *idade);
 }
