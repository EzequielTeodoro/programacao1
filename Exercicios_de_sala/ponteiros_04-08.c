//linhas apagadas


#include <stdio.h>
#include <stdlib.h>

int main(){
     int *p;
     printf("Estou apontando para %p\n", p);
     // printf("Tamanho de um inteiro: %ld\n", sizeof(int));
     p= malloc(sizeof(int));
     printf("Estou apontando para %p\n", p);
     // *p= 10;
     scanf("%d", p);
     printf("valor de *p: %d\n", *p);
     
}
