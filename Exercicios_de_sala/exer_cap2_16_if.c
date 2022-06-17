#include <stdio.h>

/*A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um programa em C que receba a idade de um nadador e emprima a sua categoria segundo a tabela a seguir:
               
                    Categoria               idade
                    Infantil A            5 - 7 anos
                    Infantil B            8 - 10 anos
                    Juvenil A             11 - 13 anos
                    Juvenil B             14 - 17 anos 
                     Sênior            maiores de 18 anos  */

int main(){
   int idade;
   printf ("Digite a idade do nadador: ");
   scanf ("%d", &idade);
   if (idade <= 4)
      printf ("idade não permitida");
      else { 
          if (idade <= 7)
             printf ("Infantil A");
          else if (idade <= 10)
             printf ("Infantil B");
          else if (idade <= 13)
             printf ("Juvenil A");
          else if (idade <= 17)
             printf ("Juvenil B");
          else
             printf ("Senior");
             
      }
      
      return 0;
  
}
             
