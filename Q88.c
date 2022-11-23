//C program to create Simple Calculator using switch case

//Input


#include <stdio.h>
int main()
{
    char op;
    float num1, num2, result=0.0f;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;
        default: 
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
    return 0;
}


//Output

//WELCOME TO SIMPLE CALCULATOR
//----------------------------
//Enter [number 1] [+ - * /] [number 2]
//6 * 9
//6.00 * 9.00 = 54.00






