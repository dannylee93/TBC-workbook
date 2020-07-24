#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  //strcmp()

void swap(int** xp, int** yp);
void printArray(int* arr[], int size);
void selectionSort(int* arr[], int n);

int main() {

	//문자열에 대한 포인터 배열
	char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange" };
	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	selectionSort(arr, n);  //ascending order : 오름차순

	printArray(arr, n);

	return 0;
}

//이중 포인터로 바꾸는 이유 : 
void swap(int** xp, int** yp) {  
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int* arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%s \n", arr[i]);
	};
	printf("\n");
}

void selectionSort(char* arr[], int n) {
	int min_idx;
	for (int i = 0; i < n - 1; i++) {    //Note : n - 1
		min_idx = i;
		for (int j = i + 1; j < n; j++) { //Note : n + 1
			/*if (*arr[j] < *arr[min_idx]) {
				min_idx = j;*/

			//strcmp()를 통해서 각 문자열의 첫 알파벳 비교하기
			if (strcmp(arr[j], arr[min_idx]) < 0) {
				min_idx = j;
			};
		};
		//swap : 각각의 메모리 주소 위치를 바꾸는 것!
		swap(&arr[min_idx], &arr[i]);
	}
}