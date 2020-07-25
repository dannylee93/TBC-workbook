#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int* a, int* b);

int main() {

	int a = 123;
	int b = 456;
	
	printf("%p %p\n", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

} 

int swap(int* a, int* b) {

	int temp = *a;
	 
	*a = *b;
	*b = temp;

	printf("%p %p\n", &a, &b);
	return a, b;
}