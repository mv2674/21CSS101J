//PROGRAM TO UNDERSTAND TYPE CONVERSIONS

//INPUT

#include <stdio.h>
int main() {
	short int i = 20;
	char c = 97;
	printf("%zu, %zu, %zu\n", sizeof(i), sizeof(c), sizeof(c + i));
	return 0;
}

//OUTPUT

// 2, 1, 4
