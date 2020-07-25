//기호적 상수 Symbolic const
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f  //등호(=) 기호 넣으면 안된다.
#define AI_NAME "Jarvis" //일반적으로 정의는 대문자로

//명백한 상수 manifest const
#include <limits.h>
#include <float.h>

int main()
{
	//기호적 상수 선언하기
	float radius, area;

	printf("Input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius;  //원의 넓이 : PI*r제곱

	printf("area is %f\n", area);
	

	//기호적 상수를 하는 이유 및 비슷한 방법으로 선언하는 방법
	const float pi = 3.141592f;


	//명백한 상수 : 각 자료형의 범위를 매번 기억하긴 어렵지만 자주 사용하는 것들 쓸 때
	printf("Biggest int : %d\n", INT_MAX);
	printf("Smallest normal float %e\n", FLT_MIN);

	return 0;
}