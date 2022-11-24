//Write a program to read two numbers and print the sum of the numbers when they are different. If both numbers are same, double the sum and then print.

//Input

#include <stdio.h>
int main() {
      int a, b, sum; 
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  sum = a+b;
  if(a==b) {
    printf("%d\n",2*sum);
  }
  else {
    printf("%d\n", sum);
  }
}

//Output

//Enter two numbers: 6 9
//15

//Enter two numbers: 8 8
//32
