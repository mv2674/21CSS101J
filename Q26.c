//Q26) PROGRAM TO PRINT LOGICAL OPERATORS

//INPUT:

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    return 0;
}


//OUTPUT:

//(a == b) || (c < b) is 1 


