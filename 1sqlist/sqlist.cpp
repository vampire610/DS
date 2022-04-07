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
	for (int j = i; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

void PrintList(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");
}


//���ҳɹ�����λ��λ���1��ʼ������ʧ�ܷ���0
int LocateElem(SqList L, ElemType e)
{
	for (int i = 0; i < L.length; i++)
	{
		if (e == L.data[i])
		{
			return i + 1;
		}
	}
	return 0;
}