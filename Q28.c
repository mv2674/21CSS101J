//Q28) PROGRAM TO PRINT USING LOGICAL OPERATORS

//INPUT:

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;   
    result = !(a != b);
    printf("!(a != b) is %d \n", result);
    return 0;
}

//OUTPUT:

//!(a != b) is 1
