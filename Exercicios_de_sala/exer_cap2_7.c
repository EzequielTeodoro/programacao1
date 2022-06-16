#include <stdio.h>

//Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.

int main() {
    int num;
    printf ("Digite o numero: ");
    scanf ("%d", &num);
    if (num >= 20 && num <= 50)
       printf ("Numero esta entre 20 e 50");
    else
       printf ("Numero nao esta entre 20 e 50");
       return 0;
       
}
