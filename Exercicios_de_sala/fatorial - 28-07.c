#include <stdio.h>
  int  fat(int n){
     int prod = 1, i;
     if (n == 0) 
             return 1;
     else if (n < 0) 
             return -1;
     
     for (i=n; i>0; i--){

          prod = prod * i;
     }
     
     return prod;
    
    }
     

 int main() {
     int num, prod;
     printf("Digite um número: ");
     scanf("%d", &num);
     prod = fat (num);
     printf("%d\n" , prod);
     
     
}
 
