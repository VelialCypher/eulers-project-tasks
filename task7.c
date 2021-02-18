#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
By listing the first six prime numbers:
	2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int isPrime(int x) {
	for (size_t i = 2; i < x; i++) {
		if(x % i == 0) return 0;
	}
	return 1;
}

int test(int below) {
	int counter = 0;
	int i = 1;
	while (counter < below) {
		i++;
		if(isPrime(i)) counter++;
	}
	printf("a prime %d number is: %d\n", below, i);
	return i;
}

int main(int argc, char* argv[]) {
	test(6); // 13
	test(10001); // 104743
	return 0;
}