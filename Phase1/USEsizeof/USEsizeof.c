#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // malloc()

//struct MyStruct
//{
//
//};

int main()
{
	/* 1. sizeof basic types */
	int a = 0;
	//sizeof 연산자의 표현식
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof (int);
	unsigned int int_size3 = sizeof (a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("%u, %zu, %zu", int_size1, int_size4, float_size)

	/* 2. sizeof arrays */;

	//핵심 : 포인터와 배열에 담긴 메모리 크기는 같지만 결과 출력 단계에의해 다르게 출력되어짐.
	int int_arr[30];
	int* int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30);

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

	/* 3. sizeof character array */

	char c = 'a';
	char string[10];  
	//1바이트*10의 크기를 할당했지만 9개+1개(null값 특성을위한 크기)로 표현된다.

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);
	/* 4. sizeof structure */

	//printf("%zu\n", sizeof(struct MyStruct));

	return 0;
} 