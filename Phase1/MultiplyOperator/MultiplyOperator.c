#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double seed_money, target_money, annual_interest;

	// 값 입력
	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest (%%) : ");
	scanf("%lf", &annual_interest);

	// 값 계산
	double fund = seed_money;  //내가 가지고 있는 돈 fund, 초기값 세팅
	int year_count = 0;

	while (fund < target_money)
	{
		fund = fund + fund * annual_interest / 100;
		year_count += 1;
	};

	printf("It takes %d years\n", year_count);
}