#include <stdio.h>
#include<stdlib.h>


#include "linklist.h"


int main()
{
	LinkList L;
	LinkList search;

	//CreatList_HeadInsert(L);
	CreatList_TailInsert(L);


	//search = GetElem(L, 6);//��������λ��Ϊ2��Ԫ��ֵ
	//if (search != NULL)
	//{
	//	printf("��λ����ҳɹ�\n");
	//	printf("%d\n", search->data);
	//}
	//
	//search = LocateElem(L, 6);//��������λ��Ϊ2��Ԫ��ֵ
	//if (search != NULL)
	//{
	//	printf("��ֵ���ҳɹ�\n");
	//	printf("%d\n", search->data);
	//}




	//FrontInsert(L, 2, 99);

	DeleteNode(L, 6);
	PrintList(L);

	return 0;
}