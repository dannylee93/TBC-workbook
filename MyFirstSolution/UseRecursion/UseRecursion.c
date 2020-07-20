#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void use_recursion(int n);

int main() {

	use_recursion(1);

	return 0;
};

void use_recursion(int n) {
	printf("LEVEL : %d, address of variable n : %p\n", n, &n);

	if (n < 4) {
		use_recursion(n + 1);
	};
	printf("LEVEL : %d, address of variable n : %p\n", n, &n);
};