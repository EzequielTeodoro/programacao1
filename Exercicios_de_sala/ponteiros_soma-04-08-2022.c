#include <stdio.h>
#include <stdlib.h>

int main(){
     int *n1, *n2, *soma;
     n1= malloc(sizeof(int));
     n2= malloc(sizeof(int));
     soma= malloc(sizeof(int));
     
     printf("Digite n1: ");
     scanf("%d", n1);
     printf("Digite n2: ");
     scanf("%d", n2);
     *soma= *n1+*n2;
     printf ("A soma é: %d\n", *soma);
     
}
