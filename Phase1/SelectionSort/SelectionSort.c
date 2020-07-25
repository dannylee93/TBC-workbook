#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main() {
	int arr[] = { 64,25,12,22,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	 
	printArray(arr, n);

	return 0;
}

void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	};
	printf("\n");
}

void selectionSort(int arr[], int n) {
	int min_idx;
	for (int i = 0; i < n - 1; i++) {    //Note : n - 1
		min_idx = i;
		for (int j = i + 1; j < n; j++) { //Note : n + 1
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			};
		};
		//swap : 각각의 메모리 주소 위치를 바꾸는 것!
		swap(&arr[min_idx], &arr[i]);
	}
}