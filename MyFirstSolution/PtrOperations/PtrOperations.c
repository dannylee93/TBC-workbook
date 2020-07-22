#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[5] = { 100, 200, 300 , 400 , 500 };
	int* ptr1, * ptr2, * ptr3;

	//Assignment
	ptr1 = arr;  //최초 인덱스 외에 주소를 참조하려면 & 붙여야함

	//Taking a pointer address
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

	//Address-of operator &
	ptr2 = &arr[2];

	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	//Adding an integer from a pointer
	ptr3 = ptr1 + 4;  //4바이트가 4개 저장될 공간만큼 값을 더한다.

	//Differening
	printf("%td\n", ptr3 - ptr1);

	//증감연산자 사용
	ptr1++;  //ptr = ptr + 1
	ptr1--;
	--ptr1;
	++ptr1;





}