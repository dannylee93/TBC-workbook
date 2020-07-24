#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	const char* mythings[5] = {
		"Dancing in the rain", "Banana", "Strawberry", "Grape", "Lemon"
	};

	char yourthing[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam emails"
	};

	const char* temp1 = "Dancing in the rain";
	const char* temp2 = "Studying the C++ language";

	//문자열의 위치를 저장한 포인터
	printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
	//개별 stack에 메모리 저장한 배열
	printf("%s %u %u\n", yourthing[0], (unsigned)yourthing[0], (unsigned)temp2);


}