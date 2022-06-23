#include <stdio.h>
int main()
{
   int i;
   printf("Sao divisiveis por 3: ");
   for (i= 1; i <= 40; i++) {
     if (i % 3 == 0)
       printf ("%d\n", i);
   }
 
}
