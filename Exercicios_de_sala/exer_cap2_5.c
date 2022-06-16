#include <stdio.h>

//Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

int main(){
    int num; 
    printf ("Digite um numero: ");
    scanf ("%d",&num);
    if ((num % 3) == 0 && (num % 7) == 0)
       printf ("Divisivel por 3 e por 7");
    else
       printf ("Nao e divisivel por 3 e por 7");
       
       return 0;
    
}
