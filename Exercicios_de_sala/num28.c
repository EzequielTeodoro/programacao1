#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num, flag, i, pos, vet[50];
   for (pos=0; pos<50; pos++)
        vet[pos] = rand()%100;
       
   for (i=1; i<50; i+=2)
   {
       printf( "%d %d\n", i, i+1);
   }
 
}

