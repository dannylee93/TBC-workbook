#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //getchar(), putchar() 둘 다 있음.

int main(void) {
	char ch;

	while ((ch = getchar()) != '\n') {

		if (ch >='0' && ch <='9') {
			ch = '*';
		}
		else {
			ch = 'w';
		};

		putchar(ch);
	};
}