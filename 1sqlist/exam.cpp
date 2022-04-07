#include "exam.h"

bool deleteElem1(SqList& L, ElemType x)
{
	int i = 0, j = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] != x)
		{
			L.data[j] = L.data[i];
			j++;
		}
	}
	L.length = j;
	return true;
}

bool deleteElem2(SqList& L, ElemType x)
{
	int k = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] == x)
		{
			k++;
		}
		else {
			L.data[i - k] = L.data[i];
		}
	}
	L.length -= k;
	return true;
}

//18页4题
bool Delete_s_t(SqList& L, ElemType s, ElemType t) {
	if (L.length == 0 || s >= t)
	{
		printf("empty\n");
		return false;
	}
	int j = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] <= s || L.data[i] >= t)
		{
			L.data[j] = L.data[i];
			j++;
		}
	}
	if (j == L.length)
	{
		printf("s is too big\n");
		return false;
	}
	L.length = j;
	return true;
}



//18页5题
bool Delete_s_t2(SqList& L, ElemType s, ElemType t) {
	if (L.length == 0 || s >= t)
	{
		printf("empty\n");
		return false;
	}
	int j = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] < s || L.data[i] > t)
		{
			L.data[j] = L.data[i];
			j++;
		}
	}
	if (j == L.length)
	{
		printf("s is too big\n");
		return false;
	}
	L.length = j;
	return true;
}


//课本代码18页4题
bool Del_s_t2(SqList& L, ElemType s, ElemType t) {
	int i, j;
	if (s >= t || L.length == 0)
	{
		return false;
	}
	for (i = 0; i < L.length && L.data[i] < s; i++);
	if (i >= L.length)
		return false;
	for (j = i; j < L.length && L.data[j] <= t; j++);
	for (; j < L.length; i++, j++)
		L.data[i] = L.data[j];
	L.length = i;
	return true;
}

//18页06
bool DeleteMore(SqList& L)
{
	if (L.length == 0)
	{
		return false;
	}
	int j = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[j] != L.data[i])
		{
			j++;
			L.data[j] = L.data[i];
		}
	}

	L.length = j + 1;
	return true;
}


bool searchInsert(SqList& L, ElemType x)
{
	int loc;
	if (L.length == 0)
	{
		return false;
	}
	if (L.data[L.length - 1] < x)
	{
		L.data[L.length] = x;
		L.length++;
		return true;
	}
	if (L.data[0] > x)
	{
		loc = 0;
	}
	else
	{
		ElemType tmp;
		for (int i = 0; i < L.length; i++)
		{
			if (L.data[i] == x)
			{
				tmp = L.data[i];
				L.data[i] = L.data[i + 1];
				L.data[i + 1] = tmp;
				return true;
			}
			else if (L.data[i] < x && x < L.data[i + 1])
			{
				loc = i + 1;
			}
		}
	}



	for (int i = L.length; i > loc; i--)
	{
		L.data[i] = L.data[i - 1];
	}
	L.data[loc] = x;
	L.length++;
	return true;
}

//课本18页9题
void SearchExchangeInsert(SqList& L, ElemType x)
{
	int low = 0, high = L.length - 1, mid;
	ElemType t;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (L.data[mid] == x)
		{
			break;
		}
		else if (L.data[mid] < x)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (L.data[mid] == x && mid != L.length - 1)
	{
		t = L.data[mid + 1]; L.data[mid + 1] = L.data[mid]; L.data[mid] = t;
	}
	if (low > high)
	{
		int i;
		for (i = L.length - 1; i > high; i--)
			L.data[i + 1] = L.data[i];
		L.data[i + 1] = x;
		L.length++;

	}
}

//18页7题
SqList MergeList(SqList A, SqList B)
{
	SqList L;
	L.length = 0;
	int i = 0, j = 0, len = 0;
	while (i < A.length && j < B.length)
	{
		if (A.data[i] < B.data[j])
			L.data[len++] = A.data[i++];
		else
			L.data[len++] = B.data[j++];
	}
	while (i < A.length)
		L.data[len++] = A.data[i++];
	while (j < B.length)
		L.data[len++] = B.data[j++];
	L.length = len;
	return L;
}


//18页8题

void arrreverse(ElemType a[], int low, int high)
{
	ElemType tmp;
	while (low < high)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
		low++;
		high--;
	}
}

bool ReverseList(ElemType a[], int m, int n)
{
	if(m+n==0)
	{
		return false;
	}
	arrreverse(a, 0, m + n - 1);
	arrreverse(a, 0, n - 1);
	arrreverse(a, n, n + m - 1);
	return true;
}