#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
The sum of the squares of the first ten natural numbers is,
	1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of
	the first ten natural numbers and the square of the sum is
		3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred
	natural numbers and the square of the sum.
*/


int test(int below) {
	int x = 0, y = 0, i = 1;
	while (i <= below) {
		x += i * i;
		y += i;
		i++;
	}
	
	printf("%d - %d = %d\n", (y * y), x, (y * y) - x);
	return (y * y) - x;
}

int main(int argc, char* argv[]) {
	int testValue = test(10); // 3025 - 385 = 2640;
	int solution = test(100); // 25502500 - 338350 = 25164150
	return 0;
}