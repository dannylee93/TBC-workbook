#include <stdio.h>

int main()
{
	int x, y, z;
	
	x = 1;
	y = 4;

	z = x + y;

	// %i 혹은 %d 동일하게 사용할 수 있음
	printf("The answer is %d  \n", 1+2);
	// 여러개 사용할 수 있음
	printf("% i + % i = % i \n", x, y, z);
	// escape sequence 줄 바꾸는 행위
	printf("The Truth is ...\n I am Ironman.\n");  
	return 0;
}