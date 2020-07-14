#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);  //10칸 출력
	printf("%-10i\n", 1234567);  //왼쪽으로 땡겨서 출력
	printf("%+i %+i\n", 123, -123);  //음수 양수가 같이 출력
	printf("% i\n% i\n ", 123, -123);  //띄어쓰기를 하면 양수는 빈칸, 음수는 -기호
	printf("%X\n", 17);  //숫자 17을 16진수로 출력
	printf("%#X\n", 17);  //#을붙이고 X를 붙이면 0X가 출력
	printf("%05i\n", 123);  //width 앞에 0을 붙이면 빈칸대신 0이 출력
	printf("%*i\n", 7, 456);  //제어문자를 *를 넣고 나중에 파라미터로 넣고 싶을 때 사용

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);  //정밀도 최소숫자를 의미, 그것보다 크면 그냥 출력
	printf("%.5d\n", 1024);  //정밀도 보다 작은 크기면 0을 채운다.
	printf("%.3f\n", 123456.1234567);  //실수예제. 소수점 이하 3자리까지.
	printf("%.3f\n", 123456.1235);  //다만 반올림하는 기호임을 기억하기
	printf("%10.3f\n", 123.45678);  //정수,실수,점 포함 크기 계산
	printf("%010.3f\n", 123.45678);  //
	printf("%.5s\n", "ABCDEFGHIJKLMN");  //개수만큼 글자수 제한
	printf("%.s\n", "ABCDEFGHIJKLMN");   //숫자0개라는 의미와 동일

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX +1, INT_MAX+1, 213124124124LL);

	return 0;
}


