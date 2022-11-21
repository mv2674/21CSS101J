//Program a c program using a #if #elif #elseif

//Input

#include <stdio.h>
#define NUM 10
void main() {
	#if(NUM == 0)
		printf("Number is Zero");
	#elif(NUM > 0)
		printf("Number is Positive");
	#else
		printf("Number is Negative");
	#endif
}

//Output

//Number is positive
