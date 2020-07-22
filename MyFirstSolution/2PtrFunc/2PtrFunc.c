#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double* start, double* end);
int main() {

	double arr[5] = { 10,13,12,7,8 };

	printf("Avg = %f\n", average(arr, arr+5));
}

double average(double* start, double* end) {    //배열의 첫주소와 마지막주소
	int count = end - start;
	printf("start : %p end : %p\n", *start, *end);
	double avg = 0.0;

	while (start < end) {
		// 증감연산자가 *기호보다 우선순위가 높아 증감 후 * 참조
		avg += *start++;  //start를 역참조를 해서 원소를 증가시킴
		//count++;
	};
	avg /= (double)count;

	return avg;
}