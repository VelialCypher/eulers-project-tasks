#include <stdlib.h>
#include <stdio.h>

/*
If we list all the natural numbers below 10
	that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int test(int below) {
	int sum = 0;
	for (size_t i = 0; i < below; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}

int main(int argc, char* argv[]) {
	int testValue = test(10); // 23
	int solution = test(1000); // 233168
	printf("the sum of all the multiples of 3 or 5 below 10: %d\n", testValue);
	printf("the sum of all the multiples of 3 or 5 below 1000: %d\n", solution);
	return 0;
}