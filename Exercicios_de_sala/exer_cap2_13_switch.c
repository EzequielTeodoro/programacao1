#include <stdio.h>

/*Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado" ou em "Prova Final" (a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final). */

int main(){
    int p1, p2, media;
    char nome[50];
    printf ("Digite o nome do aluno: ");
    scanf ("%s", &nome);
    printf ("Digite a nota da prova 1: ");
    scanf ("%d", &p1);
    printf ("Digite a nota da prova 2: ");
    scanf ("%d", &p2);
    
    media = (p1 + p2) / 2;
    
    printf (" \n   --- Dados ---   \n");
    
    switch (media) {
        case 10:
        case 9: 
        case 8: 
        case 7: 
             printf ("Nome do aluno: %s\n", nome);
             printf ("Nota da prova 1: %d\n", p1);
             printf ("Nota da prova 2: %d\n", p2);
             printf ("Media: %d\n", media);
             printf ("Aprovado!");
             break;
        case 6:
        case 5: 
        case 4: 
             printf ("Nome do aluno: %s\n", nome);
             printf ("Nota da prova 1: %d\n", p1);
             printf ("Nota da prova 2: %d\n", p2);
             printf ("Media: %d\n", media);
             printf ("Prova Final");
             break;
        default:
             printf ("Nome do aluno: %s\n", nome);
             printf ("Nota da prova 1: %d\n", p1);
             printf ("Nota da prova 2: %d\n", p2);
             printf ("Media: %d\n", media);
             printf ("Reprovado");
             
             
             
            
        
    }
   
    return 0;
    
}
