#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;


void InitStack(SqStack& S)
{
	S.top = -1;//��ʼ��ջ��
}

bool StackIsEmpty(SqStack S)
{
	if (-1 == S.top)
		return true;
	else return false;
}

int main()
{
	SqStack S;
	bool flag;
	InitStack(S);


	//if (StackIsEmpty(S))
	//	printf("ջΪ��\n");
	//else printf("ջ�ǿ�\n");






	return 0;
}