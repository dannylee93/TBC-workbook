#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdbool.h>

int main(void) {

	//약수를 전부 출력하는 프로그램
	unsigned num;
	bool isPrime = true;

	scanf("%u", &num);

	for (unsigned i = 2; i < num; i++) {
		if (num % i == 0){
			isPrime = false;
			printf("%u is divisible by %d\n", num, i);
		}
	}
	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);
}