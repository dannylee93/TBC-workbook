#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <ctype.h>  //문자관련 함수들. 레퍼런스 더 참고해보기

int main(void) {

	char ch;

	while ((ch = getchar()) != '\n') {
		if (islower(ch)) {
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		};
		putchar(ch);
	};
}