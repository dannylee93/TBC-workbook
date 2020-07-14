#include <stdio.h>

int main()
{
	printf("Integer division\n");
	printf("%d\n", 14 / 7);  //int
	printf("%d\n", 7 / 2);  //정수끼리 나누면 3.5에서 소수점을 절삭함
	printf("%d\n", 7 / 3);  //마찬가지
	printf("%d\n", 7 / 4);  //마찬가지
	printf("%d\n", 8 / 4);  //int

	//C99 표준 이후 정착된 표현방법
	printf("Truncating toward zero(C99)\n"); 
	printf("%d\n", 14 / 7);  //0에 가까운 쪽으로 소수점 절삭된다.(== -3)
	printf("%d\n", 7 / 2);  
	printf("%d\n", 7 / 3);
	printf("%d\n", 7 / 4);
	printf("%d\n", 8 / 4);
	
	//실수끼리 나눌 때
	printf("\nFloating division\n");  
	printf("%f\n", 9.0 / 4.0);  
	printf("%f\n", 9.0 / 4);  //컴파일러가 정수를 자체적으로 형 변환을 해서 계산해준다.

	return 0;
}