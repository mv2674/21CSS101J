//C program to demonstrate the use of pointers

//Input

#include <stdio.h>
int main()
{
    int num = 10;
    int * ptr;
    ptr = &num;
    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);
    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    return 0;
}

//Output

/* Address of num = 1686962124
Value of num = 10
Address of ptr = 1686962128
Value of ptr = 1686962124
Value pointed by ptr = 10 */
