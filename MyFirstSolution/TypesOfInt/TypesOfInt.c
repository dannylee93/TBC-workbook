#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>  //각각이 가질수있는 가장 큰값,작은값 알려줌

int main()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;
	long l = 65537L;
	long long ll = 123456789086422LL;

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("unsigned int = %u, $d\n", ui, ui);
	printf("long long = %lld, %ld\n", ll, ll);
	
	return 0;
}