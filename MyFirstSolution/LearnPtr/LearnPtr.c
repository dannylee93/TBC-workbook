#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

	//포인터 기본 사용법
	/*int a, b;
	
	a = 7;

	int *a_ptr;

	a_ptr = &a;

	printf("%d %d, %p", a, *a_ptr, a_ptr);*/
	
	//포인터 예제
	int *ptr =1234;  //포인터 공간에 직접 정수를 넣으면 그 해당 정수를 주소로 알고 가다가 오류

	printf("%p\n", ptr);
    printf("%d\n", *ptr);

}