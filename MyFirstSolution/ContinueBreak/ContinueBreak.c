#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	for (size_t i = 0; i < 10; i++) {
		if (i == 5) {
			break;  //continue를 하면 해당 조건만 출력하지 않고 건너 뛴다,
		};
		printf("%d", i);
	};
}