#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	//포인터를 넣을 수 있는 공간을 두개를 확보하며 2차원 포인터 배열 형성
	int* ptarr[2] = { arr0, arr1 };

	//마치 2차원 배열처럼 사용할 수 있다.
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
			//역참조 연산자 사용도 가능, 이중 포인터 처럼도 사용할 수 있다.
			printf("%d(==%d, %d) \n", ptarr[j][i], *(ptarr[j] + i), *(*(ptarr + j) + i));
	};
	printf("\n");


	//포인터의 배열과 진짜 배열의 차이
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int* parr[2];  //8바이트 공간에 포인터 공간 할당
	parr[0] = arr[0];
	parr[1] = arr[1];

	printf("%p\n", &parr[0]);  //포인터 자체의 주소
	printf("%p\n", parr[0]);  //가리키는 주소
	printf("%p\n", arr);  //가리키는 주소 ..
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);


	//포인터 배열 예제 : 문자열

	//각 원소의 첫 글자가 저장된 주소 위치가 포인터에 저장
	char* name[] = { "Aladdin", "Jasmine", "Magic Carpet","Genie" }; 

	const int n = sizeof(name) / sizeof(char*);

	for (int i = 0; i < n; ++i) {
		printf("%s at %u\n", name[i], (unsigned)name[i]);
	};
	printf("\n");

	//같은 예제를 2차원 배열로
	char aname[][15]= { "Aladdin", "Jasmine", "Magic Carpet","Genie" };

	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < an; ++i) {
		printf("%s at %u\n", aname[i], (unsigned)&aname[i]);
	};
	printf("\n");


}
