/* Algoritmo:

 variaveis: 
     int N,M,vez=0;
  inicio
     ler valor de N e M
     escrever 'Total N' na tela
     Enquanto N > 0:
        se vez ==0:
           Escreve 'Paula   -'
           vez <-- 1 
        senao 
           Escreve 'Carlos  -'
           vez <-- 0
        fim: se 
           N = N - M
           se N < 0;
               imprime 0
           senao
               imprime N
        fim: Enquanto 
        se vez == 0:
               imprime Carlos Ganhou
        senao
               imprime Paula Ganhou */

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/**************************************************/
#include <stdio.h>
int main()
{
	int n,m,vez;
	vez=0;
	printf("Escreva a quantidade de bolinhas ganhadas:\n");
	scanf("%d", &n);
	printf("Escreva a quantidade de bolinhas comida por vez:\n");
	scanf("%d", &m);
	while (n > 0)
	{
	         if (vez == 0)
	         {
			 printf("Paula   -  ");
			 vez = 1;
		 }
	         else
	         {
		         printf("Carlos  -  ");
	            	 vez = 0;
		 }
	         n = n - m;
	         if (n < 0)
	            	printf ("0\n");
	         else
	            	printf ("%d \n", n);
	}
	if (vez == 0)
		printf ("Carlos ganhou\n");
	else 
		printf ("Paula ganhou\n");	
}
