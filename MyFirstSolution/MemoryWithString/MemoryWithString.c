#include <stdio.h>

int main()
{
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	printf("%i %i %i\n", int_arr[0], int_arr[2], int_arr[9]);

	// 값을 넘어가면 출력 못한다.
	//printf("%i\n", int_arr[10000]);

	char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H','I' };

	printf("%c\n", c);
	printf("%s", str1);  
	printf("%s\n", str2); 
	//메모리 크기가 충분히 크더라도, 내부적으로'\0'을 만나면서 출력을 끝낸다.

	//강제로 메모리 할당 만 했던 공간을 출력할 수는 있음.
	printf("%hhi, %hhi, %hhi, %hhi, %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]);  //75 105 0 0 0 

	char str3[20] = "Hello \0World!";

	// '\0' 기호가 데이터 안에 있으면 뒤에 문자는 출력은 안되나 데이터 할당은 되어있다.
	printf("%s\n", str3);
	printf("%c\n", str3[7]);

	return 0;
}