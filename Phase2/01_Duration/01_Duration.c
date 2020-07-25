#include <stdio.h>

void count() {
	int ct = 0;
	printf("Count = %d\n", ct);
	ct++;
};

void static_count() {
	static int ct = 0;
	printf("Static Count = %d\n", ct);
	ct++;
};

int main() {

	count();
	count();
	static_count();
	static_count();
}