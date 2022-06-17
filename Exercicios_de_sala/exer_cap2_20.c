#include <stdio.h>

/*O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
                                    
                                    
                        Saldo Médio              Percentual
                        de 0 a 500               nenhum crédito
                        de 501 a 1000            30% do valor do saldo médio
                        de 1001 a 3000           40% do valor do saldo médio
                        acima de 3001            50% do valor do saldo médio  */

int main(){
    int numero, saldo;
    printf ("Digite o saldo:\n ");
    printf ("%d", &saldo);
    printf ("Digite 1 para o saldo <= 500\n ");
    printf ("Digite 2 para o saldo de <= 1000\n ");
    printf ("Digite 3 para o saldo de <= 3000\n ");
    printf ("Digite 4 para o saldo >= 3001\n ");
    scanf ("%d", &numero);
    
    printf (" --- Dados ---\n");
    
    switch (numero){
        case 1:
             printf ("nenhum credito");
             break;
        case 2: 
             printf ("saldo: %d\ncredito: %.1f", saldo, saldo * 0.3);
             break;
        case 3:
             printf ("saldo: %d\ncredito: %.1f", saldo, saldo * 0.4); 
             break;
        case 4:
             printf ("saldo: %d\ncredito: %.1f", saldo, saldo * 0.5); 
             break;
        default:
             printf ("\n opcao invalida");
             break;
    
     }
     
     return 0;
     
     
}
  
