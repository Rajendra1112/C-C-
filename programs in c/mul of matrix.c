#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],i,j,k,sum=0,pro[10][10];
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
	printf("enter the element for matrix B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		//printf("\n");
	}
	printf("matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	/*printf("\ntranspose of matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
}*/
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			sum=sum+a[i][k]*b[k][j];
			pro[i][j]=sum;
		}
	}
}
printf("multi:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
			printf("%d",pro[i][j]);
			//sum=sum+a[i][k]*b[k][j];
		}
		printf("\n");
	}
}
