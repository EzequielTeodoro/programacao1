#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nome[40];
    float salario, imposto;
    
    for (i= 0; i < 5; ++i) {
       printf ("informe o seu nome: ");
       scanf ("%s", &nome);
       printf ("informe o seu salario: ");
       scanf ("%f", &salario);
       if (salario <= 1300){
           printf ("Isento \n");
           
       }
       
       else {
            if (salario <= 2300){
            imposto = (salario * 10)/100;
           
       }
       else{
           imposto = (salario * 15)/100;
           
       }
       
       printf ("imposto: %.2f\n", imposto);
       
       }
        
    }
    
    
    
}
