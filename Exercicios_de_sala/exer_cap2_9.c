
#include <stdio.h>

/*Faça um programa em C que permita entrar com o ano de nascimento da pessoa e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento informado é válido. */

int main() {
    int anoNascimento, anoAtual, idade;
    printf ("Digite o ano de nascimento: ");
    scanf ("%d", &anoNascimento);
    printf ("Digite o ano atual: ");
    scanf ("%d", &anoAtual);
    
    idade = anoAtual - anoNascimento;
    
    if (anoNascimento > anoAtual)
       printf ("O ano de nascimento é inválido");
    else 
       printf ("Sua idade é: %d", idade);
       return 0;
       
}
