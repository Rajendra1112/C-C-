#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],i,j;
	printf("enter the element for matrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}
	printf("matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
}
}
