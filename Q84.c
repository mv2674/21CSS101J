//C program to check whether a number is positive, negative or zero

//Input

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }
    return 0;
}

//OUTPUT

//Enter any number: -1
//Number is NEGATIVE

//Enter any number: 5
//Number is POSITIVE
