#include <stdio.h>
int main()
{
   int i;
   printf("Sao divisiveis por 3 e 2: ");
   i= 0;
   while (i <= 40) 
   {
     i+=2;
     if (i % 3 == 0)
       printf ("%d\n", i);
       
   }
 
 
}
