#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//ex.1
	char fruit_name;

	printf("What is your favorite fruit?\n");

	scanf("%c", &fruit_name);  //&기호는 주소를 가져오기 위함이다.

	printf("You like %c!\n", fruit_name);  //글자 하나만 출력된다.


	//ex.2
	char fruit_name2[40];  //1바이트 char공간을 40개 확보해주세요 명령

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name2);  //&기호를 안서도 된다. 

	printf("You like %s!\n", fruit_name2);  //d를 s로 바꾸어야 한다.
	
	return 0;
}