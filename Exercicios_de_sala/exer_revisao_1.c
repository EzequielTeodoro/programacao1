/* variaveis: 
   int A,B,C,D
   inicio: 
   escrever A,B,C,D
   ler A,B,C,D
   se (A==B+C+D && B+C=D && B=C)
   escrever esta equilibrado!
   senao
   escrever nao esta equilibrado */
  
#include <stdio.h>

int main()
{
    int A,B,C,D;
    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);
    printf("Digite C: ");
    scanf("%d", &C);
    printf("Digite D: ");
    scanf("%d", &D);
    
    if (A==B+C+D && B+C==D && B==C)
       printf("esta equilibrada! ");
    else
       printf("nao esta equilibrada ");
    
    
}
