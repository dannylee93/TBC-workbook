#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_DAYS 365  //symbolic constant

int main() {

	char my_char[] = "Hello, World!";

	int daily_temperature[NUM_DAYS];
	double stock_prices_hist[NUM_DAYS];

	printf("%zd\n", sizeof(stock_prices_hist));  //2920 == 8bytes *365
	printf("%zd\n", sizeof(double) * NUM_DAYS);  //2920 == 8bytes *365
	printf("%zd\n", sizeof(stock_prices_hist[0]));  //8bytes

	int my_numbers[5];  //변수와 메모리 사이즈 할당

	my_numbers[0] = 1;
	my_numbers[1] = 7;
	my_numbers[2] = 2;
	my_numbers[3] = 10;
	my_numbers[4] = 1024;

	//배열을 담은 변수는 주소의 위치를 암시, &기호를 넣을 필요가 없다.
	scanf("%d", my_numbers);
	scanf("%d", &my_numbers[0]);
	return 0;

	/*runtime error*/
	my_numbers[5] = 123;  //out of bound
	my_numbers = 7;  //compile error


}