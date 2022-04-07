#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", a[i]);
	}
	
	
}