/*
* Name: Arkha Sayoga Mayadi
* NPM: 1606890252
* Class: OS
* Comment: Love OS!
*/
#define LOOP 3
#include <stdio.h>
void main() {
	int input = 5;
	int result = 5;
	int i;
	for(i = 0; i < LOOP; i++) {
		result = result * input;
	}
	printf("LOOP = %d\nInput = %d\nResult = %d\n", LOOP, input, result);
}
