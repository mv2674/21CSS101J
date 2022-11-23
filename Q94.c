//C program to declare, initialize, input and print array elements

//Input

#include <stdio.h>
#define MAX_SIZE 1000 
int main()
{
    int arr[MAX_SIZE];
    int i, N;
    printf("Enter size of array: ");
    scanf("%d", &N);
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}


//Output

//Enter size of array: 5
//Enter 5 elements in the array : 1 2 4 8 16
//Elements in array are: 1, 2, 4, 8, 16, 
