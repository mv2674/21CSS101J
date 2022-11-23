//C program to find sum of even numbers between 1 to n

//input

#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of all even number between 1 to %d = %d", n, sum);
    return 0;
}


//Output

//Enter upper limit: 20
//Sum of all even number between 1 to 20 = 110
