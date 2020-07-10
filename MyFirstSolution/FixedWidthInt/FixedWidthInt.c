#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <inttypes.h>  //아래 int 타입을 고정하는 기능을 사용할 수 있음

int main()
{
	int i;  //4바이트 정수가 만약 int가 2바이트로 설정되어있으면 overflow문제 발생
	int32_t i32;  //메모리의 넓이를 32bit로 고정
	int_least8_t i8;  //가장 작은
	int_fast8_t f8;  //8비트 중에서 가장 빠른 것
	intmax_t imax;  //int에서 가장 메모리를 많이 사용하는 사이즈
	uintmax_t uimax;  //uint에서 가장 메모리를 많이 사용하는 사이즈

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);
		
	return 0;
}