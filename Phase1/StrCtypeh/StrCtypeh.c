#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>  //toupper(), ispunct() 

#define NUM_LIMIT 1024

void ToUpper(char*);
int PunctCount(const char*);

int main() {

	char line[NUM_LIMIT];
	char* new_line = NULL;
	
	fgets(line, NUM_LIMIT, stdin);
	new_line = strchr(line, '\n');
	if (new_line) {
		*new_line = '\0';
	};

	ToUpper(line);
	puts(line);
	printf("%d\n", PunctCount(line));

	return 0;
}

void ToUpper(char* str) {
	//끝 조건을 두는 함수가 아니기 때문에 while 반복문 활용
	while (*str) {
		*str = toupper(*str);
		//포인터 인덱스를 계속 증가
		str++;
	}
}

//기호가 몇개인지 세는 코드
int PunctCount(const char* str) {
	int cnt = 0;

	while (*str)
	{
		if (ispunct(*str))
		{
			cnt++;
		};
		str++;
	};
	return cnt;
}