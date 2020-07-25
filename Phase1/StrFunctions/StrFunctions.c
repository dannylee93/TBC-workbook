#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);
void fit_st2(char* str, unsigned int size);

int main() {

	/*char msg[] = "Just,"" Do It!";
	puts(msg);
	printf("Length : %d\n", strlen(msg));
	
	fit_str(msg, 7);*/

	/*  strcat() and strncat()  */
	//char str1[100] = "First string";
	//char str2[] = "Second string";

	//strcat(str1, "! ");
	//puts(strcat(str1, str2));
	//puts(strncat(str1, str2, 2));  //두번째 문자열을 n개 concate

	/*  strcmp() and strncmp()  */
	//printf("%d\n", strcmp("a", "a"));
	//printf("%d\n", strcmp("a", "b"));
	//printf("%d\n", strcmp("b", "a"));
	//printf("%d\n", strcmp("hello", "hello"));
	//printf("%d\n", strcmp("banana", "bananas"));
	//printf("%d\n", strcmp("bananas", "banana"));
	//printf("%d\n", strncmp("bananas", "banana", 6));

	/*  strcpy() and strncpy()  */
	char dst[100] = "";
	char source[] = "Start programming!";

	//error
	/*dst = source;
	dst = "Start programming!";*/

	//strcpy(dst, source);
	//strncpy(dst, source, 5); // '\0' 기호는 복사되지 않는다.8
	//strcpy(dst, source + 6);
	//strcpy(dst, source);
	//strcpy(dst + 6, "Coding!");  //dst의 6번째 글자부터 덮어씌워진다.
	//puts(dst);

	/*  sprintf()  */
	char str[100] = "";
	int i = 123;
	double d = 3.14;
	sprintf(str, "%0 5d.png %f", i, d);
	puts(str);

	/*  There are more functions...  */




}

void fit_str(char* str, unsigned int num) {
	for (int i = 0; i < num; i++)
		putchar(*str++);
}

//메모리 공간 확인 및 \0 활용
void fit_st2(char* str, unsigned int size) {
	if (strlen(str) > size)
	{
		str[size] = '\0';
	}
}
