#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define Maxsize 5
typedef struct Stack
{
	int data[Maxsize];
	int top;
}SqStack;


typedef struct
{
	int data[Maxsize];
	int front, rear;
}SqQueue;

void InitStack(SqStack& S)
{
	S.top = -1;
}

int StackEmpty(SqStack S)
{
	if (S.top == -1)
	{
		return 1;
	}
	else return 0;
}

int Push(SqStack& S, int x)
{
	if (S.top == Maxsize - 1)
		return 0;
	S.data[++S.top] = x;
	return 1;
}

int Pop(SqStack& S, int& x)
{
	if (S.top == -1)
		return 0;
	x = S.data[S.top--];
	return 1;
}


void InitQueue(SqQueue& Q)
{
	Q.rear = 0;
	Q.front = 0;
}

int EnQueue(SqQueue& Q, int x)
{
	if ((Q.rear + 1) % Maxsize == Q.front) return 0;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % Maxsize;
	return 1;
}

int DeQueue(SqQueue& Q, int &x)
{
	if (Q.rear == Q.front) return 0;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % Maxsize;
	return true;
}

int QisEmpty(SqQueue Q)
{
	if (Q.rear == Q.front) return 1;
	else return 0;
}

int main()
{
	SqStack S;
	SqQueue Q;
	int x;
	InitStack(S);
	InitQueue(Q);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &x);
		Push(S, x);
	}
	

	while (S.top != -1)
	{
		Pop(S, x);
		printf("%2d", x);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		if (!EnQueue(Q, x))
			printf("false\n");
	}
	while (!QisEmpty(Q))
	{
		DeQueue(Q, x);
		printf("%2d", x);
	}
	printf("\n");

	return 0;
}