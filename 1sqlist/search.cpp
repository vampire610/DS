#include "search.h"


int Binary_Search(SqList L, ElemType key)
{
	int low = 0, high = L.length - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (L.data[mid] == key)
		{
			return mid;
		}
		else if (key < L.data[mid])
		{
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}


	}
	return -1 - mid;
}