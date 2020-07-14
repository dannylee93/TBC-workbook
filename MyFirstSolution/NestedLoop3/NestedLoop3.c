#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 10
#define	FIRST_CHAR 'A'

int main() {
	
	int cnt;
	int alp;

	for (cnt = 0; cnt <= NUM_ROWS; ++cnt) {
		//printf("%d", cnt);

		for (alp = FIRST_CHAR; alp <= FIRST_CHAR + cnt; ++alp) {
			printf("%c", alp);
		};
		printf("\n");
	};

	return 0;
}