/* this program takes two input and add them*/
#include<stdio.h>               /*preprocessor directives*/

 

int main() {

   int a, b, sum;

 

   printf("\nEnter two no: ");

   scanf("%d %d", &a, &b);                  /*takes input*/

 

   sum = a + b;

 

   printf("Sum : %d", sum);              /*print the sum*/

 

   return(0);

}
