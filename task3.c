#include <stdlib.h>
#include <stdio.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int isPrime(int x) {
	for (size_t i = 2; i < x; i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}

long int test(long int x) {
	int y = 2;
	int max = 0;
	while (x != 1) {
		if(x % y == 0) {
			x = x / y;
			if(y > max && isPrime(y)) {
				printf("%d\n", y);
				max = y;
			}
		} else {
			y++;
		}
	}
	return max;
}

int main(int argc, char* argv[]) {
	long int testValue = test(13195); // 5, 7, 13, 29 - max 29
	printf("===========================");
	long int solution = test(600851475143); // 839, 1471, 6857 - max 6857
	printf("the sum of the even-valued terms 13195: %d\n", testValue);
	printf("the sum of the even-valued terms 600851475143: %d\n", solution);
	return 0;
}