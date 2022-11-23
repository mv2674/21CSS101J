// C program to find average of marks using array
 
//Input

#include <stdio.h>
#define SIZE 5
int main()
{
    int marks[SIZE];
    int index, sum;
    float avg;
    printf("Enter marks of %d students: ", SIZE);
    for(index=0; index<SIZE; index++)
    {
        scanf("%d", &marks[index]);
    }
    sum = 0;
    for(index=0; index<SIZE; index++)
    {
        sum = sum + marks[index];
    }
    avg = (float) sum / SIZE;
    printf("Average marks = %f", avg);
    return 0;
}

//Output

//Enter marks of 5 students: 80 85 87 90 96
//Average marks = 87.599998

