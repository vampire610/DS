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
		return L; //i��0����ͷ���
	}
	if (i < 1)
	{
		return NULL;
	}
	//���p�Ƿ��Ѿ������һ����㣬������Χ����NULL
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


//ǰ��  ����i��λ�ò���Ԫ��
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
	if (p == NULL || p->next == NULL) //ɾ��λ�ò��Ϸ���ɾ���ڵ㲻����
	{
		printf("ɾ���ڵ㲻����\n");
		return false;
	}
	LNode* s = p->next;
	p->next = s->next;
	free(s);
	s = NULL; //����Ұָ��
	return true;
}