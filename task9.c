#include <stdlib.h>
#include <stdio.h>

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

void test(int c) {
	int i = 0;
	int a = c, x = c;

	while (a > 1) {
		if(a * a + x * x == c) {
			printf("%d + %d = %d\n", a * a,  x * x, a * a + x * x);
			break;
		}
		if(x > 1) {
			x--;
		} else {
			x = c;
			a--;
		}
	}
}

int main(int argc, char* argv[]) {
	test(25); // 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
	test(1000); // 30^2 + 10^2 = 900 + 100 = 1000 = 10^2.
	return 0;
}