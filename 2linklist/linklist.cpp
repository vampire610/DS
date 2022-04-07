#include "linklist.h"



LinkList CreatList_HeadInsert(LinkList& L)
{
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	while (scanf("%d", &x), x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
	}
	return L;
}


LinkList CreatList_TailInsert(LinkList& L)
{
	LNode* s, * p; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	p = L;
	while (scanf("%d", &x), x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = p->next;
		p->next = s;
		p = s;
	}
	return L;
}


void PrintList(LinkList L)
{
	LNode* p = L->next;
	while (p != NULL)
	{
		printf("%3d", p->data);
		p = p->next;
	}
	printf("\n");
}


LinkList GetElem(LinkList L, int i)
{
	LNode* p = L->next;
	int j = 1;
	if (0 == i)
	{
		return L; //i是0返回头结点
	}
	if (i < 1)
	{
		return NULL;
	}
	//检查p是否已经到最后一个结点，超出范围返回NULL
	while (p != NULL && j < i)
	{
		j++;
		p = p->next;
	}
	return p;
}

LNode* LocateElem(LinkList L, ElemType e)
{
	LinkList p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}


//前插  往第i个位置插入元素
bool FrontInsert(LinkList& L, int i, ElemType e)
{
	LNode* p = GetElem(L, i - 1);
	if (p == NULL)
	{
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

// 1 2 3 4 5

bool DeleteNode(LinkList& L, int i)
{
	LNode* p = GetElem(L, i - 1);
	if (p == NULL || p->next == NULL) //删除位置不合法或删除节点不存在
	{
		printf("删除节点不存在\n");
		return false;
	}
	LNode* s = p->next;
	p->next = s->next;
	free(s);
	s = NULL; //避免野指针
	return true;
}