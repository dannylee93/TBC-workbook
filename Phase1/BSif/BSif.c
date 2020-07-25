#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	//분기문 if 
	if (number % 2 == 0) {
		printf("Even");
	};
	if (number % 2 != 0) {
		printf("Odd");
	};  //if를 두번 하면 나눗셈 연산을 반복하기 때문에 비효율적

	//분기문 if-else
	if (number % 2 == 0) {
		printf("Even");
	};
	else {
		printf("Odd");
	};
}