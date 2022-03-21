#include "sqlist.h"


//i����Ҫ�����λ�ã���1��ʼ��e��Ҫ�����Ԫ��
bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)//����λ���Ƿ�Ϸ�
		return false;
	if (L.length >= MaxSize)//�������ֵ�������洢�ռ�
		return false;
	for (int j = L.length; j >= i; j--)//�ƶ�Ԫ��
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//�����±��0��ʼ��iΪλ���1��ʼ
	L.length++;
	return	true;
}

//ɾ��Ԫ�ز�ȡ��ɾ��Ԫ�ص�ֵ
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length + 1)//ɾ��λ���Ƿ�Ϸ�
		return false;
	if (L.length == 0)//˳���Ϊ�գ��޷�ɾ��
		return false;
	e = L.data[i - 1];
	for (int j = i - 1; j < L.length - 1; j++)
	{
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}