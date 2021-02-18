#include <stdlib.h>
#include <stdio.h>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

int isPrime(int x) {
	for (size_t i = 2; i < x; i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int test(int c) {
	int sum = 0;
	int i = 0;
	int y = 1;

	while (y < c) {
		if(isPrime(++y)) sum += y;
		if(y % 100000 == 0) {
			printf("%d\n", y);
		}
	}

	return sum;
}

int main(int argc, char* argv[]) {
	printf("the sum of the primes below 10: %d\n", test(10)); // 17

	// todo - its long
	printf("the sum of the primes below two million: %d\n", test(2000000)); // 1_179_908_154
	return 0;
}