#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors(ex.1)
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);

	//round-off errors(ex.2)
	float c = 0.0f;
	c = c + 0.01f;  //100번 더하면 0.9999가 된다. 부동소수점에서는 1.0을 만들 수 없음

	//overflow
	float max = 3.402823466e+38F;
	print("%f\n", max);

	max = max * 100.0f;
	print("%f\n", max);

	//underflow

	return 0;
}