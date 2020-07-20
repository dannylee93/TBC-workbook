#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define NAME "Danny Lee"
#define ADDRESS "Seoul, Korea" 

void prt_star(int length);  //기능만 수행하기 때문에 반환값 없이 void

int main(void) {

	int len = 20;

	prt_star(len);
	printf("   %s\n", NAME);
	printf("   %s\n", ADDRESS);
	prt_star(len);
};

void prt_star(int length) {

	for (size_t i = 0; i < length; i++)
	{
		printf("*");
	};
	printf("\n");
}; 