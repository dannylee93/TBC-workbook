#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[2][3] = { {1,2,3},
					  {4,7,6,} };

	printf("%d\n", arr[1][1]);

	//2차원 배열에서 오른쪽을 안쪽루프로 넣는 이유 : 내부적으로 1차원이기 때문에 스캔순서를 고려한 성능차이
	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d\n", arr[j][i]);
		printf("\n");
	};
	printf("\n");

	//혼동하기 쉬운 개념 : 포인터와 2차원 배열
	int* ptr = &arr[0][0];  //배열의 첫 주소를 포인터로 바꾸어 놓고 1차원 배열처럼 사용
	
	for (int k = 0; k < 6; k++) {
		printf("%d ", ptr[k]);
	};
	printf("\n\n");

	//2차원 배열의 메모리 크기
	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	printf("\n");
}