#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  //문자관련 함수들

int main(void) {

	char c;
	
	while ((c = getchar()) != '.') {
		printf("You love ");

		switch (tolower(c))
		{
		case 'a':
			printf("apple");
			break;
		case 'b':
			printf("banana");
			break;
		case 'c':
			printf("cake");
			break;
		default:
			printf("nothing");
		};
		printf(".\n");
		
		//뒤에 글자들을 줄바꿈이 나올때까지 전부 무시한다는 의미
		while (getchar() !='\n'){
			continue;
		}

	}
}