#include "sqlist.h"


//i代表要插入的位置，从1开始，e是要插入的元素
bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)//插入位置是否合法
		return false;
	if (L.length >= MaxSize)//超出最大值，超出存储空间
		return false;
	for (int j = L.length; j >= i; j--)//移动元素
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//数组下标从0开始，i为位序从1开始
	L.length++;
	return	true;
}

//删除元素并取出删除元素的值
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length + 1)//删除位置是否合法
		return false;
	if (L.length == 0)//顺序表为空，无法删除
		return false;
	e = L.data[i - 1];
	for (int j = i - 1; j < L.length - 1; j++)
	{
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}