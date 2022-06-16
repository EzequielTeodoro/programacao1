#include <stdio.h>

/*A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido */

int main() {
    int salario, prestacao;
    printf ("Digite o salario bruto: ");
    scanf ("%d", &salario);
    printf ("Digite o valor da prestacao: ");
    scanf ("%d", &prestacao);
    if (prestacao <= (salario * 0.3))
       printf ("Emprestimo pode ser concedido");
    else 
       printf ("Emprestimo nao pode ser concedido");
       return 0;
       
}
 
