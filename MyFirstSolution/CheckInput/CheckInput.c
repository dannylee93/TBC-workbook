#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void main(void) {

	int input;
	char c;

	printf("Please input an integer and press enter.\n");

	while (scanf("%ld", &input) != 1)  //scanf는 알맞는 형식이 들어온 만큼 수를 리턴
	{
		printf("Your input is ... ");

		while ((c = getchar()) != '\n')
			putchar(c);

		printf(" ...Which is not an integer. please try again\n");
	};

	printf("Your input %d is an integer. Thank you", input);
}