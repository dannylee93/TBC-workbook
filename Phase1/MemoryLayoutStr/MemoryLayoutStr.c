#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4 = "I am a string!!!!!!!.";
	const char ar1[] = "I am a string!.";
	const char ar2[] = "I am a string!.";
	const char ar3[] = "I am a string!!.";

	//포인터에 완벽하게 똑같은 문자열을 출력하면 같은 주소를 출력한다.
	printf("read only data low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
		(unsigned long long)"I am a string!.");

	//배열의 주소 출력해보기
	printf("stack high \t%llu %llu %llu\n",
		(unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);

	//각 메모리 레이아웃에 따라 메모리가 저장된다.

	//배열과 포인터의 차이
	char heart[] = "I Love Kelly!";
	const char* head = "I Love Helly!";

	// 일반 배열 출력
	for (int i = 0; i < 6; i++)
		putchar(heart[i]); 
	putchar('\n');

	//포인터를 배열처럼 사용해서 출력
	for (int i = 0; i < 6; i++)
		putchar(head[i]);  
	putchar('\n');

	//포인터 산술연산 사용
	for (int i = 0; i < 6; i++)
		putchar(*(heart + i));
	putchar('\n');

	//while 반복문과 null character 사용
	while (*(head) != '\0')
	{
		putchar(*(head++));
	};

	//얕은 복사해보기
	const char* str1 = "When all the lights are low ...";
	const char* copy;

	copy = str1;

	//마지막 파라미터 주소는 각 포인터 변수 자체의 주소라서 다름
	printf("%s %p %p\n", str1,  str1, &str1);
	printf("%s %p %p\n", copy, copy, &copy);


}