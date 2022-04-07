#ifndef _EXAM_H_
#define _EXAM_H_

#include <stdio.h>
#include "sqlist.h"


bool deleteElem1(SqList& L, ElemType x);
bool deleteElem2(SqList& L, ElemType x);

bool Delete_s_t(SqList &L,ElemType s,ElemType t);
bool Delete_s_t2(SqList& L, ElemType s, ElemType t);

bool Del_s_t2(SqList& L, ElemType s, ElemType t);

bool DeleteMore(SqList& L);

bool searchInsert(SqList& L, ElemType x);

void SearchExchangeInsert(SqList& L, ElemType x);

SqList MergeList(SqList A, SqList B);

bool ReverseList(ElemType a[], int m, int n);


#endif