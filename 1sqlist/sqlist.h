#ifndef _SQLIST_H_
#define _SQLIST_H_

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;  //˳�����Ԫ������


//��̬��������
typedef struct
{
    ElemType data[MaxSize];
    int length;

} SqList;

bool ListInsert(SqList& L, int i, ElemType e);

bool ListDelete(SqList& L, int i, ElemType& e);


#endif
