#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;

	//ex.1 무한루프에 빠짐
	i = 1;
	while (--i < 5) {
		printf("Hi!\n");

	};


	//ex.2 good
	i = 1;
	while (i < 5) {
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	};

	//ex.3 진입하지 못함
	i = 10;
	while (i++ < 5){
		printf("Hi\n");
	};

	return 0;
}