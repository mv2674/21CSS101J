//Program to check whether the given number is divisible by 3 or not.

//Input

#include <stdio.h>
void main() { 
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num %3 == 0) {
        printf("Given number %d is divisible by 3\n", num);
        
    }
    else {
        printf("Given number %d is not divisible by 3\n", num);
    }

}

//Output
//Enter a number: 9
//Given number 9 is divisible by 3
            
