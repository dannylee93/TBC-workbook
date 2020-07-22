#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터를 산술연산할 때
	long long* ptr = 0;

	printf("%p %lld\n", ptr, (long long)ptr);
	ptr += 2;
	printf("%p %lld\n", ptr, (long long)ptr);

	//포인터끼리 빼기연산
	double arr[10];  //double은 데이터 하나당 8바이트
	double* ptr1 = &arr[1], * ptr2 = &arr[3];

	//int* ptr3 = ptr1 + ptr2; // not working
	int i = ptr2 - ptr1;
	printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
} 