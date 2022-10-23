//Q32) PROGRAM TO PRINT A FLOATING POINT VALUE THAT HAS 20 VLUES AFTER THE POINT.

//INPUT

#include <stdio.h>

int main( )
{
  float x = 0.1,
        y = 0.1,
        z = 0.1;
  float total = x + y + z;
  printf("The sum is %.20f\n", total);
  return 0;
}


//OUTPUT

//The sum is 0.30000001192092896000
