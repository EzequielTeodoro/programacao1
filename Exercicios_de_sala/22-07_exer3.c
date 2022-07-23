#include <stdio.h>
typedef struct {
    char nome [20];
    int idade;
    float nota;
    
} Tipo_Aluno;
 
 int main ()
 {
 
    int i;
    Tipo_Aluno aluno[3];
    for (i=0; i<3; i++) {
    
    printf("nome %d: ", i);
    scanf("%s", aluno[i].nome);
    printf("idade: ");
    scanf("%d", &aluno[i].idade);
    printf("nota: ");
    scanf("%f", &aluno[i].nota);
    printf("\n");
    
    }

    for (i=0;i<3;i++){
    printf("Nome:%s\nIdade:%d\nNota: %.2f\n\n", aluno[i].nome, aluno[i].idade, aluno[i].nota);
    }

}
 
