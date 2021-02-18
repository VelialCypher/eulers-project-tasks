#include <stdlib.h>
#include <stdio.h>

/*
2520 is the smallest number that can be divided by each
	of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that
	is evenly divisible by all of the numbers from 1 to 20?
*/

int isDivide(int num, int min, int max) {
	while (max >= min) {
		if(!(num % max == 0)) return 0;
		max--;
	}
	return 1;
}

int test(int min, int max) {
	int num = max;

	while (1) {
		if(isDivide(num, min, max)) {
			return num;
		}
		num++;
	}

	return 0;
}

int main(int argc, char* argv[]) {
	int testValue = test(1, 10); // 2520
	int solution = test(1, 20); // 232792560
	printf("from 1 to 10: %d\n", testValue);
	printf("from 1 to 20: %d\n", solution);
	return 0;
}