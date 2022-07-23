#include <stdio.h>
typedef struct {
    char nome [20];
    int idade;
    float nota;
    
} Tipo_Aluno;
 
 int main ()
 {
 
    Tipo_Aluno aluno[3];
    
    //primeiro aluno 
    
    printf("nome: ");
    scanf("%s", aluno[0].nome);
    printf("idade: ");
    scanf("%d", &aluno[0].idade);
    printf("nota: ");
    scanf("%f", &aluno[0].nota);
    printf("%s %d %.2f\n", aluno[0].nome, aluno[0].idade, aluno[0].nota);
    
    
    //segundo aluno 
    
   
    printf("nome: ");
    scanf("%s", aluno[1].nome);
    printf("idade: ");
    scanf("%d", &aluno[1].idade);
    printf("nota: ");
    scanf("%f", &aluno[1].nota);
    printf("%s %d %.2f\n", aluno[1].nome, aluno[1].idade, aluno[1].nota);
    
    
    //terceiro aluno
    
    
    printf("nome: ");
    scanf("%s", aluno[2].nome);
    printf("idade: ");
    scanf("%d", &aluno[2].idade);
    printf("nota: ");
    scanf("%f", &aluno[2].nota);
    printf("%s %d %.2f\n", aluno[2].nome, aluno[2].idade, aluno[2].nota);
    
    
    
}
 
