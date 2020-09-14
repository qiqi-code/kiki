#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *b;
	b=(int*)malloc(2*sizeof(int));
	b[0]=2;
	b[1]=10;
	printf("%d",b[0]);
	free(b);
	return 0;
}
