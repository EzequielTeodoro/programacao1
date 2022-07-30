#include <stdio.h>
#include <stdlib.h>

int main(){
   int *num;
   num= malloc(sizeof(int));
   *num=20;
   printf("%d\n", *num);
 }
