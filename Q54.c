//Q54) PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS AN PERFECT NUMBER OR NOT
  

//INPUT 

#include <stdio.h>
void main() {
  int n,s=0,i;
  scanf("%d", &n);
  for(i=1; i<n; i++);
  {
    if(n%i==0)
      s=s+i;
  }
  if (s==n)
    printf("perfect number");
  else
    printf("not a perfect number");
}

//OUTPUT

//70
//perfect number
