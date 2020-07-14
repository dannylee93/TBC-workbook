#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>  //ex.3
int main(void) {

	//ex.1
	_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (2 < 1);

	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);

	//ex.2 3항 연산자
	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");
	printf("\n");

	//ex.3 불리언타입의 표준 include 했을 때
	bool bt = true;
	bool bf = false;

	printf("True is %d\n", bt);
	printf("False is %d\n", bf);

	for (size_t i = 0; i < length; i++)
	{

	}
	return 0;
}