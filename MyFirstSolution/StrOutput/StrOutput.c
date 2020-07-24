#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TEST "A string from #define"

int main() {

	/*  puts()  */
	char str[60] = "String array initialized";
	const char* ptr = "A pointer initialized";

	//puts("String without \\n");
	//puts("END");
	//puts(TEST);  
	//puts(TEST + 5);   //해당 인덱스 위치부터 null character 까지 출력된다.
	//puts(&str[3]);
	////puts(str[3]);
	//puts(ptr + 3);

	/*  string without \0  */
	char str2[] = { 'H', 'I', '!' };
	//puts(str2);   //null character가 없어서 경고


	/*  puts() and fputs()  */
	/*char line[10];
	while (gets(line)) {
		puts(line);
	};*/

	/*char line[6];
	while (fgets(line, 6, stdin)) {
		puts(line);
	};*/


	/*  printf()  */
	char input[100] = "";
	int ret = scanf("%10s", input);
	printf("%s\n", input);
	ret = scanf("%10s", input);
	printf("%s\n", input);

}

/*  Custom output  */
void custom_put(const char* str) {
	while (*str != '\0')
	{
		putchar(*str++);
	};
}

int custom_put2(const char* str) {
	int count = 0;

	while (*str)
	{
		putchar(*str++);
		count++;
	};
	putchar('\n');

	return count; 
}