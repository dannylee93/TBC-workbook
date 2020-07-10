#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>  //각각이 가질수있는 가장 큰값,작은값 알려줌

int main()
{
	unsigned int i = 0b11111111111111111111111111111111; //0b는 2진수라는 의미
	unsigned int u = UINT_MAX;
	signed int su = INT_MAX;

	printf("%u\n", u);
	printf("%u\n", su);

	printf("%u\n", i);
	printf("%u\n", sizeof(unsigned int));
	//4라고 나오는데, 이건 4바이트 타입이라는 말 == 32비트
	printf("%u", sizeof(i)); 

	return 0;
}