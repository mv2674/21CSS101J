//Program to print factorial of n

//Input

#include<stdio.h>
void main() {
  int number;
  printf("printing factorial of the number : \n");
  scanf("%d",&number);
  int factorial = 1;
  for(int i = 1 ; i <= number; i++) {
    factorial = factorial * i;
  }
    printf("factorial of the number is %d\n",factorial);
  }
  
//Output

/* printing factorial of the number : 
5
factorial of the number is 120 */
