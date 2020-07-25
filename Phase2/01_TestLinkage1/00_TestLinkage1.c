#include <stdio.h>

extern int el;

void testLinkage() {

	printf("Do Something called\n");
	printf("%d\n", el);

	el++;
}