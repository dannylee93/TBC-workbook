#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void print_binary(unsigned long num);
void print_binary_loop(unsigned long num);

int main() {

	unsigned long num = 10;

	print_binary_loop(num);
	printf("\n");
	print_binary(num);

}

void print_binary_loop(unsigned long num) {

	while (true) {
		int quotient = num / 2;
		int remainder = num % 2;

		printf("%d", remainder);

		num = quotient;

		if (num == 0) break;
	};
};

void print_binary(unsigned long num) {

	int remainder = num % 2;

	if (num >= 2)
		print_binary(num / 2);

	printf("%d", remainder);
}