#include <stdio.h>

void esc_num(int num){
     printf("número: %d\n", num);
     if(num>0)
        esc_num(num-1);
       
}
 
 int main(){
     esc_num(10);
    
}
 


