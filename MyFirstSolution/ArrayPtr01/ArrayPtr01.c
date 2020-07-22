#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[10];
	int num = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	//배열의 첫번쨰 위치가 포인터에 주소로 담긴다.
	int* ptr = arr;
	printf("%p %p %p\n", ptr, arr, &arr[0]);  // 같은 값을 나타냄

	//포인터에 덧셈연산을 했을 때
	ptr += 2;  //int 사이즈 2개 크기만큼 변경된다.
	printf("%p %p %p\n", ptr, (arr + 2), &arr[2]);

	//포인터와 배열 연산
	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);  //괄호를 빼면 warning




}