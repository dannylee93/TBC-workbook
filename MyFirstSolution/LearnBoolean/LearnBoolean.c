#include <stdio.h>
#include <stdbool.h>  //표준에 해당 include가 추가됨.

int main()
{
	printf("%u\n", sizeof(_Bool)); //1 byte

	//고전C에서는 boolean type이 없었는데 _Bool 이 추가됨
	_Bool b1;
	b1 = 0;  //false
	b1 = 1;  //true

	print("%d\n", b1);  //별다른 형식지정자가 없어 d로 출력한다.

	//include를 통해 bool을 선언할 수 있다.
	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);


	return 0;
}