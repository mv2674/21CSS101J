//C program to check Leap Year

//Input

#include <stdio.h>

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("COMMON YEAR");
    }
    return 0;
}

//Output

//Enter year : 2008
//LEAP YEAR

//Enter year : 2018
//COMMON YEAR
