#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //window에서만 사용, _getch(), _getche()

int main(void) {

	char c;

	while ((c = _getche()) != '.') {  //e는 echo를 의미하며, 입력하면 바로 출력한다.
		putchar(c);
	};
}