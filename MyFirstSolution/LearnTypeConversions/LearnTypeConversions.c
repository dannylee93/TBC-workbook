#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//promotions in assignment
	short s = 64;
	int i = s;
	
	float f = 3.14f;
	double d = f;

	//demotion in assignment
	d = 1.25;
	f = 1.25;  //원래 경고를 띄워야하지만 작은 숫자는 상관 X
	f = 1.123;

	printf("%f", f);
	d = f + 1.234;
	f = f + 1.234;


	return 0;
}