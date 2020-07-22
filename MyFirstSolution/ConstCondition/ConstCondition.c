#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	const double PI = 3.14159;  // 일반 변수를 상수로 만듦
	//PI = 123;

	const int arr[5] = { 1,2,3,4,5 };
	//arr[1] = 123;

	const double arr2[3] = { 1.0, 2.0, 3.0 };
	//arr2[0] = 100.0;

	const double* pd = arr2;
	//*pd = 3.0;       // pd[0] = 3.0; arr2[0] = 3.0;
	//pd[2] = 1024.0;  // arr2[2] = 4.0;

	printf("%f", pd[2]);

	//그래도 포인터의 증감연산자는 가능하다.
	printf("%f %f", pd[2], arr2[2]);
	pd++;
	printf("%f %f", pd[2], arr2[2]);

}