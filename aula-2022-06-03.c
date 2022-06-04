
#include <stdio.h>

int main() {
    float imc, massa, altura;
    printf("peso:");
    scanf("%f", & massa);
    printf ("altura");
    scanf("%f", & altura);
    imc = massa/(altura*altura);
    if (imc< 18.5)
        printf ("magro\n");
    else if (imc< 25.)
        printf ("normal\n");
    else if (imc < 30)
        printf ("sobrepeso \n");
    else printf ("obeso \n");
    }
