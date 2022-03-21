#include <stdio.h>
#include <string.h>

#include "sqlist.h"


int main()
{
    SqList L; //定义顺序表

    bool ret;//查看返回值

    ElemType del;//接受删除的元素

    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;

    ListInsert(L, 2, 5);
    int i = 0;

    ListDelete(L, 2, i);

    i = i + 1;


    return 0;
}