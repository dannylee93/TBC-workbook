#include <stdio.h>

void say_hello(void); // prototyping, function declaration

int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();
	say_hello();
	say_hello();
	say_hello();

	return 0;
}

void say_hello(void)    //함수가 함수를 호출하는 형식
{
	int x = 1; // 변수 초기값 설정
	x = 10;
	printf("Hello World! \n");

	// void는 return 생략가능
	return;
}
