//C program to print all natural numbers from 1 to n

//Input

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}


//Output

//Enter any number: 10
//Natural numbers from 1 to 10 :
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
