#include <stdlib.h>
#include <stdio.h>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
	that the 6th prime is 13.

What is the 10 001st prime number?
*/

int isPrime(int x) {
	for (size_t i = 2; i < x; i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int test(int bellow) {
	int i = 0;
	int y = 1;

	while (i != bellow) {
		if(isPrime(++y)) i++;
	}
	
	return y;
}

int main(int argc, char* argv[]) {
	printf("is the 6st prime number: %d\n", test(6)); // 13
	printf("is the 10 001st prime number: %d\n", test(10001)); // 104743
	return 0;
}