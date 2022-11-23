// Program to find the average of n numbers using arrays

//Input

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

/*Enter number of elements: 5
Enter number1: 3
Enter number2: 6
Enter number3: 12
Enter number4: 24
Enter number5: 48
Average = 18.60 */
