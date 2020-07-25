#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int cnt = 0;

	while (true)
	{
		printf("Current count is %d. To be continue? (y/n)\n", cnt);

		//c에 담기는 것은 첫번 째 한 글자
		int c = getchar();

		if (c == 'n')
			break;
		else if (c == 'y')
			cnt++;
		else
			printf("Please input 'y' or 'n'\n");
		
		//첫번째 글자 외에 추가적으로 입력된 것들은 건너가기 위함
		while (getchar() != '\n')  
			continue;
	}
}