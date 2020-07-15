#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int temp;
	
	//true이면 왼쪽 값을 선택
	temp = true ? 1024 : 7;
	printf("%d\n", temp);

	//false이면 오른쪽 값을 선택
	temp = false ? 1024 : 7;
	printf("%d\n", temp);

	//ex.2
	int number;
	scanf("%d", &number);

	bool is_even;

	/*if (number % 2 == 0)
		is_even = true;
	else
		is_even = false;*/

	//위와 동일한 효과
	is_even = (number % 2 == 0) ? true : false;

	//0,1 을 사용해도 동일한 결과 얻을 수 있다.
	temp = 1 ? 1024 : 7;
	printf("%d\n", temp);

	temp = 0 ? 1024 : 7;
	printf("%d\n", temp);
}