//program for a formatted output function

//input

#include <stdio.h>
void main() {
	float x = 12.0, y = -3.3;
	printf("%-+7.0f value %-+10.1e value", x, y);
}

//output
//+12     value -3.3e+00   value
