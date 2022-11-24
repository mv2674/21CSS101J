//Program to print while loop in alphabets

//Input

#include <stdio.h>
void main() {
  char ch ,ab;
  ch = 'A';
  printf("enter the last alphabet you want to print : ");
  scanf("%c",&ab);
  while ( ch <= ab){printf("%c",ch); ch ++;}
}

//Output

/*
enter the last alphabet you want to print : M
ABCDEFGHIJKLM
*/

  
