#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int num = 0;
	int sum = 0;
	int status;

	printf("Enter an integer(q to quit) : ");
	status = scanf("%d", &num);
	printf("return value : %d\n", status);
	printf("%d\n", num);

	while (status == 1){
		sum += num;

		printf("Enter next integer(q to quit) : ");
		status = scanf("%d", &num);

	};

	printf("Sum = %d\n", sum);
	return 0;
}