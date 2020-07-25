#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	for (int i = 1; i < 6; i++) {
		for (char num = 'A'; num < 'L'; num++) {
			printf("%c ", num);
		};
		printf("\n");
	};
	return 0;
}