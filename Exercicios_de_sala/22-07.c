#include <stdio.h>
struct pessoa{
    char nome [20];
    int idade;
};
 
 int main ()
 {
    struct pessoa var1 = {"Ezequiel", 22};
    printf("nome: %s idade: %d\n", var1.nome, var1.idade);
 
    scanf("%s %d", var1.nome, &var1.idade);
    printf("nome: %s idade: %d\n", var1.nome, var1.idade);
    
}
 
