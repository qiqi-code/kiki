#include<stdio.h>
int a[10]={10,8,63,52,19,65,99,89,103,2};
void sort(int *a)
{
	int i,j;
	for(i=1;i<10;i++)
	{
		int temp=a[i];
		for(j=i;j>0&&a[j-1]>temp;--j)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
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
