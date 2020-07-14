#include <stdio.h>

int main()
{
	int count = 0;
	
	//0123456789
	while (count < 10)
	{
		printf("%d", count);
		count++;
	};

	//123456789
	while (++count < 10)
	{
		printf("%d", count);
		//count++;
	};

	//012345678910
	while (count++ < 10)
	{
		printf("%d", count);
		//count++;
	};

	return 0;
}