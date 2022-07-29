#include <stdio.h>
void teste(int *num){
     printf("e: %p\n",&num);
     printf("f: %p\n", num);
     *num = 10;
}

int main(){ 
     int num = 7;
     printf("%p\n", &num);
     teste(&num);
     printf("%d\n", num);
}
