#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

	printf("%u\n", (unsigned)arr2d);
	printf("%u\n", (unsigned)arr2d[0]);
	printf("\n");

	//arr2d points to arr2d[0] (not arr2d[0][0])
	printf("%u\n", (unsigned)*arr2d);
	printf("%u\n", (unsigned)&arr2d[0]);
	printf("%u\n", (unsigned)&arr2d[0][0]);
	printf("%f %f\n", arr2d[0][0], **arr2d);  //이중포인터로 역참조 한 값과 같다.

	/*Pointers to Multidimesional Arrays*/
	float(*pa)[4]; //4개의 원소를 가진 하나의 싱글 포인터
	float* ap[2];  //두개의 포인터를 가진 하나의 배열

	printf("%zu\n", sizeof(pa));  //4
	printf("%zu\n", sizeof(ap));  //8
	printf("\n");


}