#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81
int main() {

	char words[MAXLENGTH] = "A string in an array";
	char* pt1 = "A pointer to a string.";

	//puts("Puts() add a new line at the end: ");//puts() add '\n' at the end
	//puts(MESSAGE);
	//puts(words);  //경고 : Maxlength 만큼 데이터가 초기화 되지 않아서.
	//puts(pt1);
	//words[3] = 'p';  //ok
	//puts(words);
	//pt1[8] = 'A';  //Runtime Error
	// 
	////문자열 
	//const char m1[15] = "Love you!";

	//for (int i = 0; i < 15; i++)
	//{
	//	printf("%d ", (int)m1[i]);
	//};
	//printf("\n");  //null character 까지 숫자가 출력되고 나머지 공간은 0을 출력

	//문자 하나씩 배열로
	const char m2[15] = { 'l','o','v','e',' ', 'y','o','u','!' ,'\0' };

	for (int i = 0; i < 15; i++)
	{
		printf("char : %d ", (int)m2[i]);
	};
	printf("\n");

	//메모리 사이즈 void
	const char m3[] = "Love you!";

	//배열로 사용
	char cookies[1] = { 'A', };

	//배열, 포인터 개념과 문자열
	char truth[10] = "Truth is ";
	if (truth == &truth[0]) puts("1. true!");
	if (*truth == 'T') puts("2. true!");
	if (*(truth + 1) == truth[1]) puts("3. true!");
	if (truth[1] == 'r') puts("4. true!");

}