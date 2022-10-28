/* this program takes two input and add them*/
#include<stdio.h>               /*preprocessor directive*/

 

int main() {

   int a, b, sum;                        /*integers a and b*/

 

   printf("\nEnter two no: ");             /*print this on screen*/

   scanf("%d       %d", &a, &b);                  /*takes input*/

 

   sum = a + b;                            /*background calculation*/
    
 

   printf("Sum of two numbers is equal to: %d", sum);              /*print the sum*/


 

   return(0); 

}
