#include <stdlib.h>
#include <stdio.h>

/*
A palindromic number reads the same both ways.
The largest palindrome made
	from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int isPalindrome(int x) {
	int y = x;
	int num = 0;

	while (x > 0) {
		num = num * 10 + x % 10;
		x /= 10;
	}

	if(num == y) return 1;
	return 0;
}

int test(int below) {
	int a = below;
	int g = 0;

	while (a > 0) {
		g = a * below;

		if(isPalindrome(g)) {
			printf("%d x %d: %d\n", a, below, g);
			return g;
		}

		a--;
	}

	return 1;
}

int main(int argc, char* argv[]) {
	test(99); // 91 × 99: 9009
	test(999); // 91 × 999: 90909
	return 0;
}