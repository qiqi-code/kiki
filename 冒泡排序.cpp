#include<stdio.h>
int a[10]={10,8,63,52,19,65,99,89,103,2};
void sort(int *a)
{
	int temp=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	sort(a);
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]); 
	}
	return 0;
}
