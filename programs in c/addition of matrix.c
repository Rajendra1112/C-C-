#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k;
	printf("enter the element of first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the element of second matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("sum is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}
}
