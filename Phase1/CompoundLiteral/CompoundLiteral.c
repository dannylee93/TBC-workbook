#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COLS 4
int main() {
	int a = 1;

	// symbolic 하지 않은 리터럴 상수
	3;
	3.14f;

	//배열 과 배열을 복합리터럴로 표현
	int b[2] = { 3,4 };
	(int[2]) {3, 4};

	//배열 정의 없이 함수 파라미터에 적용 가능하다.
	printf("%d\n", sum_2d((int[2][COLS]) { {1, 2, 3, 4}, { 5,6,7,8 } }, 2));

}