#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int z;
	scanf("%d", &z);
	char* p,c;
	p = (char*)malloc(z);
	scanf("%c", &c);
	fgets(p,100,stdin);
	//gets(p);
	puts(p);
	free(p);
	return 0;
}
