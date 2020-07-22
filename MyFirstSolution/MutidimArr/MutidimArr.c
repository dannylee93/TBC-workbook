#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {

	int data[ROWS][COLS] = { {1,2,3,4},
							 {5,6,7,8},
							 {9,0,1,2} };

	printf("%d\n", data[2][3]);

	int* ptr = &data[0][0];
	int* ptr_temp = &data;
	printf("%p  %p\n", ptr, ptr_temp);





}