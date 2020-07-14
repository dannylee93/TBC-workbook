#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#';  //# == 35
	float f = 7.1f;

	draw(i);  //() 안에 i는 값을 넣는 행위 >> 인수
	draw((int)c);
	draw((int)f);

	return 0;
};

void draw(int n)  //여기서 int n은 변수 역할 >> 파라미터
{
	while (n-- > 0)
	{
		printf("*");
	};
	printf("\n");
};