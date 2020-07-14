#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	//int i = 0;
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d", i);  //0123456789
	};

	//1이 아닌것도 더할 수 있다.
	for (int i = 0; i < 100; i += 8) {
		printf("%d", i);
	};

	//문자 타입또한 변경할 수 있다.
	for (char c = 'A'; c <= 'Z'; c++) {
		printf("%c", c);
	};

	//test 구간에서 다양한 비교연산을 할 수 있다.
	for (int i = 0; i * i < 100; i++) {
		printf("%d", i);
	};

	//initialize 구간에서 여러개 변수를 취할 수 있다.
	for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10) {
		printf("%d", x);
	};

	//변화방식 선언 구간을 빈칸으로 두고 for문 안에 사용할 수 있다.
	for (int i = 2, n = 2; n < 10; /*left blank*/) {
		n = n * i;
		printf("%d", n);
	};

	//for문 안에 조건을 전체 생략할 수도 있다.
	for (; ; ) // ==while 문과 같아진다.
	{
		printf("I love you!");
	};

	return 0;
} 