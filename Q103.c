//Program to print a table in a reverse order

//INPUT

#include<stdio.h>
void main() {
  int number;
  printf("enter the number whose table you want to print : ");
  scanf("%d",&number);
  printf("Table of %d is :-\n",number);
  for (int multiple = 10; multiple > 0 ; multiple --)
  {
    int product = number * multiple ;
    printf("%d x %d = %d\n ", number, multiple , product);
  }
}

//Output

/* enter the number whose table you want to print : 5
Table of 5 is :-
5 x 10 = 50
 5 x 9 = 45
 5 x 8 = 40
 5 x 7 = 35
 5 x 6 = 30
 5 x 5 = 25
 5 x 4 = 20
 5 x 3 = 15
 5 x 2 = 10
 5 x 1 = 5
 */
