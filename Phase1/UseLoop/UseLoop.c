#include <stdio.h>

int main()
{
	int n = 1;

	while (n<11)
	{
		printf("%d\n", n);
		n += 1;  //조건을 넣지 않으면 무한루프 된다.
	}


	return 0;
}