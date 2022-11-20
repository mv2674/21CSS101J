//PROGRAM TO PRINT DOB

//INPUT

#include <stdio.h> 
void main() {
  int year, month, day;
  printf("Enter DOB in yyyy.mm.dd format: ");
  scanf("%d %d.%d", &year, &month, &day);
  printf("DOB is: %d.%d.%d\n", year, month, day);
}


//OUTPUT
//Enter DOB in yyyy.mm.dd format : 2005.02.15
//DOB is : 2005.2.15
