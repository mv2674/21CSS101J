// Program to find the average of n numbers using arrays

//INPUT

#include <stdio.h>
int main() {
  int marks[10], i, n, sum = 0;
  double average;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
    sum += marks[i];
  }
  average = (double) sum / n;
  printf("Average = %.2lf", average);
  return 0;
}

//Output

/*Enter number of elements: 3
Enter number1: 5
Enter number2: 7
Enter number3: 9
Average = 7.00 */

