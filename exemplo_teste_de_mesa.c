#include <stdio.h>

int main()
{
   int i;
   printf ("Sao divisiveis por 3 e 2: ");
   i = 2;
   do {
      if (i % 3 == 0)
        printf("%d\n", i);
        i+=2;
   } while (i <= 10);
   
}
