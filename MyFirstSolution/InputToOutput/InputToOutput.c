#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float won = 0, dollar = 0;

	printf("Input Won\n");
	scanf("%f", &won);  //실수형은 d를 f로 바꾸어 주어야함

	dollar = won * 0.00089; //소수점 계산하려면 int를 실수형으로 바꾸기

	printf("Dollar = %f\n", dollar);

	return 0;
}