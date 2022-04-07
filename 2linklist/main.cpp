#include <stdio.h>
#include<stdlib.h>


#include "linklist.h"


int main()
{
	LinkList L;
	LinkList search;

	//CreatList_HeadInsert(L);
	CreatList_TailInsert(L);


	//search = GetElem(L, 6);//查找链表位序为2的元素值
	//if (search != NULL)
	//{
	//	printf("按位序查找成功\n");
	//	printf("%d\n", search->data);
	//}
	//
	//search = LocateElem(L, 6);//查找链表位序为2的元素值
	//if (search != NULL)
	//{
	//	printf("按值查找成功\n");
	//	printf("%d\n", search->data);
	//}




	//FrontInsert(L, 2, 99);

	DeleteNode(L, 6);
	PrintList(L);

	return 0;
}