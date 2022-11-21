//Write a program to find the largest and smallest of the given two numbers using if-else

//Input

#include <stdio.h>
void main() {
  int num1, num2;
  printf("Enter 2 numbers : ");
  scanf("%d %d", &num1, &num2);
  if (num1>num2) {
    printf("The largest number : %d\n", num1);
    printf("the smallest number : %d\n",num2);
  }
  else {
    printf("The largest number : %d\n", num2);
    printf("The smallest number : %d\n", num1);
  }
}


//output

//Enter 2 numbers : 10 20
//The largest number : 20
//The smallest number : 10

//Enter 2 numbers : 25 15
//The largest number : 25
//The smallest number : 15 
