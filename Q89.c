//C program to check even or odd number using switch case

//Input

#include <stdio.h>
int main() {
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    switch(num % 2)
    {
        case 0: 
            printf("Number is Even");
            break;
        case 1: 
            printf("Number is Odd");
            break;
    }
    return 0;
}

//Output

//Enter any number to check even or odd: 6
//Number is Even

