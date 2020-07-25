#include <stdio.h>
#include <float.h>

int main()
{
	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));  //float보다 메모리를 두배 더 써서
	printf("%u\n", sizeof(long double));  //커서를 가져다 대면 메모리 사용량을 볼 수 있다.

	float f = 123.456f;  //일반적으로 float는 리터럴상수 끝에 f를 붙여주는게 좋다.
	double d = 123.456;

	float f2 = 123.456;  //f를 붙이지 않으면 경고가 뜬다. truncate 절삭으로 인한 정밀도 저하
	double d2 = 123.456f;  //float를 double에 넣는건 문제 없음
	
	int i = 3;
	float f3 = 3.f;  // 3.0f '.0'점을 넣어주는 것이 가독성에 좋음
	double d3 = 3.;  // 3.0
	
	float f4 = 1.234e10f;  //과학적표기법도 사용가능하다.

	float f5 = 0xb.ap1;  //0x == 16진수, e대신 p를 적었다.
	double d

	return 0;
}