#include <stdio.h>
#include <string.h>

#include "sqlist.h"
#include "exam.h"
#include "search.h"


int main()
{
    SqList A,B; //定义顺序表

    bool ret;//查看返回值

    ElemType del;//接受删除的元素

    A.data[0] = 1;
    A.data[1] = 2;
    A.data[2] = 3;
    A.data[3] = 4;
    A.data[4] = 6;
    A.data[5] = 7;
    A.data[6] = 8;
    A.data[7] = 9;
    A.data[8] = 10;
    A.data[9] = 11;
    A.length = 10;

    B.data[0] = 4;
    B.data[1] = 5;
    B.data[2] = 6;
    B.data[3] = 7;
    B.data[4] = 8;
    B.data[5] = 99;
    B.length = 6;

    //deleteElem2(L, 3);
    //ret = Delete_s_t(L,3,8);
    /*ret = Del_s_t2(L, 3, 7);
    if(!ret){
        printf("shibai\n");
    }*/

    //DeleteMore(L);
    /*int loc;
    loc = Binary_Search(L, 3);*/

    //SearchExchangeInsert(L, 9);

    //SqList L = MergeList(A, B);

    ReverseList(A.data,4,6);

    PrintList(A);
    printf("\nL.length=%d\n", A.length);


    return 0;
}