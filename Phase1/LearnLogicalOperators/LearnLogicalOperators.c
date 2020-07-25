#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdbool.h>
#include <ctype.h>
#include <iso646.h>

#define PERIOD '.'

int main(void) {

	/*
	logical operator
	&& : and
	|| : or
	!  : not
	*/

	bool test1 = 3 > 2 || 5 > 6;  //true
	bool test2 = 3 > 2 && 5 > 6;  //false
	bool test3 = !(5 > 6);		  //true

	printf("%d %d %d\n", test1, test2, test3);


	//예제 2
	char ch;
	int cnt = 0;

	while ((ch = getchar()) != PERIOD){

		if (ch != '\n' && ch != ' ')
			cnt++;
	}
	printf("%d", cnt);
}

