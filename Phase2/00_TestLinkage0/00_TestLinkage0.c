#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int el;
static int il;

void testLinkage();

int main() {

	el = 1024;

	testLinkage();
	printf("%d\n", el);
	
	return 0;
}