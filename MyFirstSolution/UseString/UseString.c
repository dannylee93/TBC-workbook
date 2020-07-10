#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65;  //d='A' 와 같다.
	
	printf("%c, %hhd\n", c, c);
	printf("%c, %hhd\n", d, d);
	printf("%c\n", c+1); //1을 더하면 B가 된다.

	// 컴퓨터에서 띵동소리 내기
	char a = '\a';  //아스키 코드에서 BELL을 char 타입에서 표현한 예시
	printf("%c", a);
	printf("\07");  //BELL을 8진수로 직접 입력할 때
	printf("\x7");  //BELL을 16진수로 직접 입력할 때

	//백슬래쉬로 밑줄입력 구현
	float salary;
	//print("$______");
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);

	return 0;
}