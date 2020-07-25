#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN 81
int main() {

	//첫 번째 포인터 라인처럼 크기를 할당하지 않으면 Runtime Error 발생
	char* name = "";
	char name2[128];
	//int result = scanf("%s", name);


	//gets() 함수와 gets_s()
	char words[5] = "";  //값 초기화 과정
	//gets(words);  //메모리공간보다 크면 런타임 에러
	//gets_s(words, sizeof(words));  //메모리공간보다 크면 런타임 에러
	printf("START\n");
	
	printf("%s", words);
	puts(words);  //puts()는 \n 이 포함되어 있다.

	printf("END\n");

	/*fgets() and fputs()*/
	char word2[STRLEN] = "";
	fgets(word2, STRLEN, stdin);  //fgets는 \n을 없애지 않는다.(입력 후 엔터칠 때 생김)

	/*fgets 후 생성되는 '\n' 을 '\0' 으로 변경해보기*/
	int i = 0;
	while (word2[i] != '\n' && word2[i] != '\0')
	{
		i++;
		if (word2[i] != '\n')
			word2[i] != '\0';
	};

	fputs(word2, stdout);
	fputs("END", stdout);  //문자 그대로 출력

	/*  scanf() 방법  */
	
	char str1[6], str2[6];
	int count = scanf("%5s %5s", str1, str2);  //null character 고려해서 입력공간 만들기
	//int count = scanf("%6s %6s", str1, str2);  //메모리 공간 초과하면 런타임 에러
	printf("%s | %s \n", str1, str2);







}