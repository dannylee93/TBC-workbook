#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 핵심 정보 및 자주 바꿀 수도 있는 정보는 따로 #define 가능하다.
#define NUM_ROWS 5
#define	FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main() {
	int r;
	int c;

	for (r = 0; r < NUM_ROWS; ++r) {
		for (c = FIRST_CHAR; c <= LAST_CHAR; ++c) {
			printf("%c", c);
			printf("\n");
		};
	};

	return 0;

}