//Program to find simple intrest 

//INPUT

#include <stdio.h>
void main() {
  float amount, rate, simple_intrest;
  int months;
  printf("Provide amount and interest in the format $amount rate%% : ");
  scanf("%f %f%%", &amount, &rate);
  printf("Enter the period in months ");
  scanf("%d", &months);
  simple_interest = (amount rate months)/100; 
  printf("Simple interest: %f\n", simple_interest);
}

//OUTPUT

//Provide amount and interest in the format $amount rate% : $5000 6.5%
//Enter the period in months : 10
//Simple interest : 3250.000000
