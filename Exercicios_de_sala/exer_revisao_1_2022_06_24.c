#include <stdio.h>
int main()
{
int A,B,C,D;
printf ("Digite A: ");
scanf("%d", &A);
printf ("Digite B: ");
scanf("%d", &B);
printf ("Digite C: ");
scanf("%d", &C);
printf ("Digite D: ");
scanf("%d", &D);

if(A==B+C+D && B+C==D && B==C)
   printf ("Esta equilibrado\n");
else 
   printf ("Nao esta equilibrado\n");
   
} 
