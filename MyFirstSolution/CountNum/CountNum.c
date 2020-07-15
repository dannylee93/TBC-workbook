#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '.'
#define BLANK ' '

int main(void) {
	
	char ch;
	int line_cnt = 0;
	int word_cnt = 0;
	int char_cnt = 0;

	printf("Enter text : %c");
	
	while ((ch = getchar()) != STOP) {
		//putchar(ch); 
		if (isalpha(ch)) {
			char_cnt++;
		}
		else if (ch == BLANK || ch == STOP) {
			word_cnt++;
		};
		if (ch == STOP) {
			line_cnt++;
		};
	};

	printf("Characters = %d, Words = %d, Lines = %d", char_cnt, word_cnt, line_cnt);
 }