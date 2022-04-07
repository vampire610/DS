#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

LinkList CreatList_HeadInsert(LinkList& L);

LinkList CreatList_TailInsert(LinkList& L);

void PrintList(LinkList L);

LinkList GetElem(LinkList L, ElemType n);

LNode* LocateElem(LinkList L, ElemType e);

bool FrontInsert(LinkList& L, int i, ElemType e);

bool DeleteNode(LinkList& L, int i);

#endif