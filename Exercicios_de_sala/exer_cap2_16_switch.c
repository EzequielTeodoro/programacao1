#include <stdio.h>

/*A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um programa em C que receba a idade de um nadador e emprima a sua categoria segundo a tabela a seguir:
               
                    Categoria               idade
                    Infantil A            5 - 7 anos
                    Infantil B            8 - 10 anos
                    Juvenil A             11 - 13 anos
                    Juvenil B             14 - 17 anos 
                     Sênior            maiores de 18 anos  */

int main(){
    int idade;
    printf ("Informe a sua idade: ");
    scanf ("%d", &idade);
    
    switch(idade){
        case 0:
        case 1:
        case 2: 
        case 3: 
        case 4:
             printf ("Idade não permitida");
             break;
        case 5:
        case 6:
        case 7:
             printf ("Infantil A");
             break;
        case 8:
        case 9:
        case 10:
             printf ("Infantil B");
             break;
        case 11:
        case 12:
        case 13:
             printf ("Juvenil A");
             break;
        case 14:
        case 15: 
        case 16:
        case 17:
             printf ("Juvenil B");
             break;
        default: 
             printf ("Senior");
            
    }
    
    return 0;
    
}
