#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int t_v, f_v;
	t_v = (1 < 2);
	f_v = (1 > 2);

	//true value는 1을 반환하고, false value는 0을 반환한다.
	printf("True is %d\n", t_v);
	printf("False is %d\n", f_v);

	int i = -5;

	//C언어는 0은 False 이며, 그 외에는 True 라고 인식한다.
	while (i)
	{
		printf("%d is true\n", i++);
	};
	printf("%d is false\n", i);

	return 0;
}