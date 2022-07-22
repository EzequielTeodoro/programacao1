#include <stdio.h>
typedef struct {
    char nome [20];
    int idade;
    float nota;
    
} Tipo_Aluno;
 
 int main ()
 {
    Tipo_Aluno aluno;
    printf("nome: ");
    scanf("%s", aluno.nome);
    printf("idade: ");
    scanf("%d", &aluno.idade);
    printf("nota: ");
    scanf("%f", &aluno.nota);
    
    printf("%s %d %.2f\n", aluno.nome, aluno.idade, aluno.nota);
}
 
