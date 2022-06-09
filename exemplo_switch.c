#include <stdio.h>

int main()
{
       char  entrada;
       scanf ("%c", &entrada);
       switch (entrada)
       {
           case 99:
               printf  ("Você acertou o 99\n");
               break;
           case 13:
               printf  ("Você acertou o 13\n");
               break;
           default:
               printf  ("Você errou\n");
        }
        
}
