#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	const int password = 337;
	int i;
	
	//기존 코드
	printf("Enter secret code : ");
	scanf("%d", &i);

	while (i != password) {
		printf("Enter secret code : ");
		scanf("%d", &i);
	};
	printf("Good!");

	//종료조건을 체크하는 do-while 문. 무조건 한번은 수행하고 시작하는 형태
	do
	{
		printf("Enter secret code : ");
		scanf("%d", &i);
	} while (i !=password);
	printf("Good!");

	return 0;
}