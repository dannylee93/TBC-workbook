#include <stdio.h>
#include <string.h> // strlen and more
#include <stdlib.h>

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = " \0";
	char str4[100] = "\n";

	printf("%zu, %zu\n", sizeof(str1), strlen(str1));
	printf("%zu, %zu\n", sizeof(str2), strlen(str2));
	printf("%zu, %zu\n", sizeof(str3), strlen(str3));
	printf("%zu, %zu\n", sizeof(str4), strlen(str4));

	/* Extra */
	//동적할당과 관련
	char* str5 = (char*)malloc(sizeof(char) * 100);
	
	str5[0] = 'H'; str5[1] = 'E'; str5[2] = 'L'; str5[3] = 'L'; str5[4] = 'O';
	str5[5] = '\0';

	printf("%zu, %zu\n", sizeof(str5), strlen(str5));
	return 0;
}