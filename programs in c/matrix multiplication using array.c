#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[10][10],i,j,k,sum=0;
	printf("enter the element of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&a[i][j]);
	}
}
	printf("4 element of matrix are:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("enter the element of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&b[i][j]);
	}
}
	printf("4 element of matrix are:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("the product of matrix is:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
			sum+=a[i][k]*b[k][j];
		}
		c[i][j]=sum;
	}
}
	printf("%d\t",c[i][j]);
	printf("\n");
}

