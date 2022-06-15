1. Complete os códigos abaixo:


a)
   int main(){
   printf ("Hello World!");
   return 0;

   }


b)
   // Comentário de uma linha simples
   /* Comentário de várias linhas */



2. Cria uma variável nomeada meuNumero e atribua o valor de 50 a ela.


   int meuNumero;
   meuNumero = 50;
   


3. Use o correto especificador de formato para imprimir o valor da variável na tela:


a) 
   int meuNumero = 15;
   printf ("%d", meuNumero);

   
b) 
   char meuCaractere = 'D';
   printf ("%c", meuCaractere);

   
c) 
   float meuDecimal = 1.3;
   printf ("%f", meuDecimal;
           
   
d)
   int meuNumero = 15;
   char meuCaractere = 'D';
   float meuDecimal = 1.3;
   printf ("%d %f", meuNumero, meuDecimal);
   printf ("%f %f", meuDecimal, meuDecimal);
   printf ("%c %f %d", meuCaractere, meuDecimal, meuNumero);
   printf ("%d %c %f %d", meuNumero, meuCaractere, meuDecimal, meuNumero);
   
   
   
 4. Crie variáveis e crie o código necessário para que seja impresso na tela as seguintes mensagens:

 
 a)
   A soma de 4 e 9 é 13.
   
      int n1, n2;
      n1= 4;
      n2= 9;
    
      printf ("A soma de %d e %d é %d.", n1,n2, n1+n2);

    
    
 b) 
 => o produto de 5 e 5 é 25.
    
   
      int num;
      num = 5;
     
      printf ("=> o produto de %d e %d é %d.", num, num, num*num);


  
  c) 
  Opcao 'A': 24, opcao 'B': 30.
  
  char letraA = 'A', letraB= 'B';
  int n1 = 24, n2 = 30;
  printf ("Opcão '%c': %d, opcao '%c': %d.", letraA, n1, letraB, n2);
  


  d)
  [caractere digitado: "B"]
  
   
      char letra = 'B';
      printf ("[caractere digitado: \"%c\"]", letra);
    

  
5. Complete o código para que seja exibida a soma de 5 + 10 usando as variáveis x e y: 


 int x = 5;
 int y= 10;
 
 printf ("%d", x + y);
 
 
 
6. Complete as partes que estão faltando para criar as três variáveis do mesmo tipo:


 int x = 5, y = 6, z = 50;
 printf ("%d", x + y + z);



7. Complete as variáveis abaixo com o tipo correto:


 int meuNumero = 5;
 float meuNumeroDecimal = 5.99;
 char meuCaractere = 'D';



8. Complete o código abaixo para multiplicar 5 com 10 e emprimir o resultado:


 int x = 10;
 int y = 5;
 printf ("%d", x * y);



9. Coloque o operador correto no código abaixo para que ele imprima as saídas desejadas (valor desejado impresso na tela):


a) 
int x = 10;
printf ("x: %d", x);
printf ("x: %d", ++x);
//saída desejada: 10 11


b)
int x = 10;
printf ("x: %d", ++x);
printf ("x: %d", x);
//saída desejada: 11 11


c)
int x = 10;
printf ("x: %d", ++x);
printf ("x: %d", ++x);
//saída desejada: 11 12



10. Complete com somente o valor desejado para que o valor 5 seja adicionado à variável 10.
   

int x = 10;
x += 5;



11. Complete as condições abaixo da forma certa para que os códigos tenham a saída desejada:


a)
 int x = 50;
 int y = 10;
 if (x > y) {
    printf ("x é maior que y");
    
 }
 //saída desejada: x é maoir que y
 
 
 
 b) 
 int x = 10;
 int y = 50;
 if (y < x) {
    printf ("x é maior que y");
 }else {
    printf ("x é menor que y");
 }
 //saída desejada: x é menor que y
 
 
 
 c)
 int x = 20; 
 int y = 20;
 if (x >= y) {
    printf ("x (%d) é maoir ou igual a y (%d)", x, y);
 } else {
    printf ("x é menor que y");
 
 }
 // saída desejada: x (20) é maior ou igual a y (20)
 
 
 
11. Complete o código abaixo para que funcione corretamente:


int aux;
printf ("Entre com um valor inteiro: ");
scanf ("%d", &aux);
if (aux > 20 && aux < 40) {
    printf ("O valor digitado está entre 20 e 40\n");
    
} else if (aux >= 40 && aux < 60) {
    printf ("O valor digitado é 40 ou menor que 60\n");
    
} else if (aux >= 60) {
    printf ("O valor digitado é 60 ou maoir que 60\n");
    
} else (aux <= 20) {
    printf ("O valor digitado é 20 ou menor que 20\n");

}


12. Complete o código abaixo para que imprima "1" se x for igual a y, "2" se x for maoir que 

int x = 50;
int y = 50;

if (x == y) {
  printf ("1");

} else if (x > y) {
  printf ("2");

} else {
  printf ("3");

}



13. Corrija os códigos abaixo:


a)
int num;
scanf ("Digite um número: "%c", num);

correto: 

int num;
printf ("Digite um número:");
scanf ("%c", &num);



b) 
char nome[30];
printf ("Digite seu nome:");
scanf ("%d", nome);

correto:

char nome[30];
printf ("Digite seu nome:");
scanf ("%s", nome);



c) 
float num;
scanf ("%f", *num);

correto: 

float num;
scanf ("%f", &num);



 


 







    
    
    
     
   
   





