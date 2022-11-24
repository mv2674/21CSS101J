//Program to read even numbers and stop when odd number enters

//Input

#include<stdio.h>
void main() {
  int number;
  printf("enter the number : \n");
  scanf("%d",&number);
  do {
    printf("enter the number : \n");
  scanf("%d",&number);   
  if (number % 2 != 0) 
  { 
    printf("the entered number is not allowed as input\n");
  break;
  }
  }
    while(1);
printf("the code is running successfully\n");
  }

//Output

/*
enter the number : 
6
enter the number : 
7
the entered number is not allowed as input
the code is running successfully
*/
