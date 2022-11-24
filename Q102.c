/*Write a program to read two integer values for the variables first_number, second_number and calculate the difference between first_number and the second_number (first_number - second_number).
If the value of the difference is between -25 and 25 (both not included) then double the value and print it, else print the difference as it is. */

//Input

#include <stdio.h>
void main() { 
  int a, b, difference;
  printf("Enter 2 integer values: ");
  scanf("%d %d", &a, &b); 
  difference = a-b;
  if (a-b> -25 && a-b < 25) {
    printf("%d\n", difference*2); 
  }
  else { 
    printf("%d\n", difference);
  }
}

//Output

//Enter 2 integer values: 100 90
//20
