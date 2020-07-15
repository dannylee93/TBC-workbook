#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main() {

	//basics
	int my_arr[SIZE];

	for (int i = 0; i < SIZE; ++i) {
		my_arr[i] = i*i;
	};

	for (size_t i = 0; i < SIZE; ++i) {
		printf("%d ", my_arr[i]);
	};


	//sample
	int num_arr[SIZE];
	int sum = 0;
	int j;

	printf("Enter %d numbers : ", SIZE);
	for (int i = 0; i < SIZE; ++i) {
		scanf("%d", &j);
		num_arr[i] = j;
	};
	for (int i = 0; i < SIZE; ++i) {
		sum += num_arr[i];
	};
	printf("Sum = %d\n", sum);
	
	return 0;
}