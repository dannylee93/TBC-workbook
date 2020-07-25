#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main() {

	int num = 0;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));
	return 0;
};

long loop_factorial(int n) {

	long result = 1;

	for (size_t i = 1; i < (n + 1); i++)
	{
		result *= i;
	};
	return result;
};

//오름차순 형태
long loop_factorial_desc(int n) {

	long result;

	for (result = 1; n > 1; n--)
	{
		result *= n;
	};
	return result;
};

long recursive_factorial(int n) {

	if (n > 0) {
		//return 바로 앞에 재귀를 호출하는 것을 tail(end) recursion 이라 한다.
		return n * recursive_factorial(n - 1);
	}
	else
		return 1;
};
