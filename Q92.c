//C program to print all even numbers from 1 to n

//Input

#include <stdio.h>
int main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}


//Output

/* Print all even numbers till: 20
Even numbers from 1 to 20 are: 
2
4
6
8
10
12
14
16
18
20
*/
