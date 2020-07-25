#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double *arr, int n);

int main() {
	double arr1[5] = { 10,13,12,7,8 };
	double arr2[3] = { 1.8,-0.2,6.3 };

	//scope 안에서 주소와 사이즈 확인
	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));
	printf("Address = %p\n", arr2);
	printf("Size = %zd\n", sizeof(arr2));

	//average 함수 사용 후
	printf("Avg = %f\n", average(arr1, 5));
	printf("Avg = %f\n", average(arr2, 3));
}

//배열을 함수에 전달할 때는 포인터로 사용되기 때문에 개수정보를 따로 처리해야된다.
double average(double *arr, int n) {
	printf("Size = %zd in function average\n", sizeof(arr));

	double avg = 0.0;
	for (int i = 0; i < n; ++i) {
		avg += arr[i];
	}
	avg /= (double)n;

	return avg;
}