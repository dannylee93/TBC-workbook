#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 4

//prototype : sum1,sum2는 함수정의 생략
int sum2d_1(int ar[ROWS][COLS]);
int sum2d_2(int ar[ ][COLS], int row);  //가장 왼쪽에 있는 인덱스만 생략가능하고 나머지는 지정해줘야함
int sum2d_3(int* ar, int row, int col);  //동적할당을 사용하기 위한

int main() {

	int data[ROWS][COLS] = { {1,2,3,4},
							 {5,6,7,8},
							 {9,0,1,2} };

	printf("%d\n", data[2][3]);

	int* ptr = &data[0][0];
	int* ptr_temp = &data;
	printf("%p  %p\n", ptr, ptr_temp);

}

int sum2d_3(int* ar, int row, int col) {
	int r, c, tot = 0;
	
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
			tot += *(ar + c + col * r);  //== ar[c + (col * r)]
	};
	return tot;
}