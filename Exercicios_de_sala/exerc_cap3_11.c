
#include <stdio.h>

int main(){

    int num, cont=0;

    for(;;)
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num >= 100 && num <= 200){
            cont++;
        }
        else if(num == 0){
            break;
        }
    }

    printf ("Quantidade de números digitados entre 100 e 200: %d", cont);

    return 0;
}
