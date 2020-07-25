#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void display(char cr, int lines, int width);

int main() {

	char c;
	int rows, cols;

	while (true)
	{
		scanf("%c %d %d", &c, &rows, &cols);
		display(c, rows, cols); 

		if (c == '\n')
			break;
	};
};

void display(char cr, int lines, int width) {
	
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < width; j++)
			printf("%c", cr);  //putchar() 활용도 가능
		printf("\n");
	};
};
