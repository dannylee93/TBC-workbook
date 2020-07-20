#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int c;

	while ((c = getchar()) != EOF) {  // End Of File
		putchar(c);
	}

	//stream 현상
	while (1){
		 
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}
}