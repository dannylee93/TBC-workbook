﻿//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	int sum = 0;

	printf("Input two integers\n");

	scanf("%d%d", &i, &j); // & : ampersand

	sum = i + j;

	printf("%d plus %d = %d\n", i, j, sum);

	return 0;
}