#ifndef _SQLIST_H_
#define _SQLIST_H_

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;  //顺序表中元素类型


//静态分配数组
typedef struct
{
    ElemType data[MaxSize];
    int length;

} SqList;

bool ListInsert(SqList& L, int i, ElemType e);

bool ListDelete(SqList& L, int i, ElemType& e);


#endif
