#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int fibonacci(int number);

int main(){

	for (int count = 1; count < 13; ++count) {
		printf("%d ", fibonacci(count));
	};
};

//피보나치 수열 재귀호출로 구현하기
int fibonacci(int number) {

	int value = 0;

	if (number > 2)
		value += fibonacci(number - 1) + fibonacci(number - 2);
	else
		value = 1;

	return value;
}