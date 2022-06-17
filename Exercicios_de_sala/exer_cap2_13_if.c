#include <stdio.h>

/*Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado" ou em "Prova Final" (a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final). */

int main(){
    float p1, p2, media;
    char nome[30];
    printf ("Nome do aluno: ");
    scanf ("%s", &nome);
    printf ("Digite a nota da prova 1: ");
    scanf ("%f", &p1);
    printf ("Digite a nota da prova 2: ");
    scanf ("%f", &p2);
    
    media = (p1 + p2) / 2;
    
    printf ("\n  ---Dados---  \n");
    printf ("Aluno: %s\n", nome);
    printf ("Notas => p1: %.1f \n         p2: %.1f\n", p1, p2);
    printf ("Media: %.1f\n", media);
    if (media >= 7){
       printf ("Aprovado!");}
    else if (media >= 3){
       printf ("Prova Final");}
    else {
       printf ("Reprovado");}
       return 0;
       
}
