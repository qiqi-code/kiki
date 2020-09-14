#include<stdio.h>
#include<stdlib.h> 
#include<malloc.h>
int a[10] = { 10,8,63,52,19,65,99,89,103,2 };
void merge(int* a, int start, int mid, int end)
{
	int* b;
	b = (int*)malloc((end - start + 1) * sizeof(int));
	int i = start, j = mid + 1, len = 0;
	for (; i <= mid && j <= end;)
	{
		if (a[i] > a[j])
		{
			b[len++] = a[j++];
		}
		else
		{
			b[len++] = a[i++];
		}
	}
	while (i <= mid)
	{
		b[len++] = a[i++];
	}
	while (j <= end)
	{
		b[len++] = a[i++];
	}
	for (int t = 0; t < len; t++)
	{
		a[t + start] = b[t];
	}
}

void mergesort(int* a, int start, int end)
{
	if (start >= end)
		return;
	int mid = start + (end - start) / 2;
	mergesort(a, start, mid);
	mergesort(a, mid + 1, end);
	merge(a, start, mid, end);
}

int main()
{
	mergesort(a, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}