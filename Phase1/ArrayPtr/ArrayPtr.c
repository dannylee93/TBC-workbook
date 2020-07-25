#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12  //Symbolic constant, macro

int main() {
	
	//배열의 기본적인 사용법
	int high[MONTHS] = { 2,5,11,18,23,27,29,30,26,20,12,4 };

	for (int i = 0; i < MONTHS; i++) {
		printf("%d ", high[i]);
	};
	printf("\n");

	float avg = 0.0;

	for (int i = 0; i < MONTHS; i++) {
		avg += high[i];
	};
	printf("Average = %f\n", avg  / (float)MONTHS);

	//배열의 주소 확인하기
	printf("%p, %p\n", high, &high[0]);
	for (int i = 0; i < MONTHS; i++) {
		printf("%lld\n", (long long)&high[i]);
	};
	printf("\n");

	//상수를 붙일 수 있다.
	const int low[12] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };
	//low[0] = -11;

	//배열이 초기값이 없을 때 : 컴파일러는 경고하지 않음
	int not_init[4];  //static 조건(storage class)을 넣으면 '0' 값으로 초기화 되어있음
	for (size_t i = 0; i < 4; i++) {
		printf("%d\n", not_init[i]);
	};

	//배열의 값을 일부만 정의할 때 : 나머지 값은 '0'으로 초기화 함.
	int insuff[4] = { 2,4 };
	for (size_t i = 0; i < 4; i++) {
		printf("%d\n", insuff[i]);
	};

	//초기화 원소의 사이즈보다 많은 데이터를 넣을 때 : 컴파일러 에러
	/*int over[2] = { 1,2,3,4 };*/
	
	//omitting size : 배열의 사이즈 지정 없이 초기값 설정할 때
	const int power_of_twos[] = { 1,2,3,4,5,6,7 };  //[사이즈]를 생략할 수 있다.
	
	printf("%d\n", sizeof(power_of_twos));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(power_of_twos[0]));
	//for 반복문 이용하려면 sizeof()를 이용해야함
	for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; i++) {
		printf("%d\n", sizeof(power_of_twos[i]));
	};

	//Designated initializers : 인덱스 위치 값 지정
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 };
	for (size_t i = 0; i < MONTHS; i++)
	{
		printf("%d ", days[i]);
	};




}