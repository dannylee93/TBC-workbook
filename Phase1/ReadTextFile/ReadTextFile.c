#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>  //exit()

void main(void) {

	int c;
	FILE *file = NULL;  //file 이라는 변수 앞에 *기호는 포인터라는 의미. 주소가 저장됨.
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);  //오류코드 같이 알려주면서 프로그램을 강제종료한다.
	}

	while ((c=getc(file)) != EOF)
	{
		putchar(c);
	}
	fclose(file);

}