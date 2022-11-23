//Program to take 5 values from the user and store them in an array

//Input

#include <stdio.h>
int main() {
  int values[5];
  printf("Enter 5 integers: ");
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }
  printf("Displaying integers: ");
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}


//Output

/*Enter 5 integers: 2 4 8 16 32
Displaying integers: 2
4
8
16
32 */
