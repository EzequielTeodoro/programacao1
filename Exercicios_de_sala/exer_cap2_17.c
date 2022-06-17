#include <stdio.h>

/*Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar. 
                
                
                
                        idade                               valor 
                        Até 10 anos                        R$30,00
                        Acima de 10 até 29 anos            R$60,00
                        Acima de 29 até 45 anos            R$120,00
                        Acima de 45 até 59 anos            R$150,00
                        Acima de 59 até 65 anos            R$250,00
                        Maior que 65 anos                  R$400,00  */

int main(){
    int num;
    char nome[30];
    printf ("Digite o nome: ");
    scanf ("%s", &nome);
    printf ("Digite 1 para idade ate 10 anos \n");
    printf ("Digite 2 para 11 - 29 anos \n");
    printf ("Digite 3 para 30 - 45 anos \n");
    printf ("Digite 4 para 46 - 59 anos \n");
    printf ("Digite 5 para 60 - 65 anos \n");
    scanf ("%d", &num);
    
    printf (" --- Dados ---\n");
    
    switch (num){
        case 1: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$30,00");
             break;
        case 2: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$60,00");
             break;
        case 3: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$120,00");
             break;
        case 4: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$150,00");
             break;
        case 5: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$250,00");
             break;
        case 6: 
             printf ("Nome: %s", nome);
             printf ("\nDevera pagar: R$400,00");
             break;
        default:
             printf ("Opcao invalida");
             break;
    }
    
    return 0;
}
  
