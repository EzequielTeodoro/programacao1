#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num, flag, i, pos, vet[50];
   for (pos=0; pos<50; pos++)
        vet[pos] = rand()%100;
        
   for (pos=0; pos<50; pos++)
   { 
       flag = 0;
       for (i=2; i<vet[pos]-1; i++){
            if (vet[pos] % i == 0)
              flag = 1;
       }
       if (flag == 0)
          printf("pos %d: %d é primo\n", pos, vet[pos]);
    }
    
            
        
}

