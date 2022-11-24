//Program to print even numbers between 5 to 50

//Input

#include<stdio.h>
void main(void) {
  for (int number = 5; number < 50; number ++) 
  {
    if (number % 2 != 0)
    {
      continue;
    }
    printf("%d\n",number);
  }
}

//Output

/* 
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
*/
