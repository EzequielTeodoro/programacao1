#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, f1= 1, f2= 1, aux;
    for (i= 2; i < 20; ++i){
        aux= f2;
        f2= f1 + f2;
        printf ("%d \n", f2);
        f1= aux;
        
    }
    
    return 0;
    
}
