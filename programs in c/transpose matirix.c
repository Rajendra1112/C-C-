#include<stdio.h>
void main(){
	int a[10][10],trans[10][10],i,j;
	printf("enter the element of matrix:\n");
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
	printf("transpose matrix is:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	trans[i][j]=a[j][i];	
	}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
	printf("%d\t",trans[i][j]);
}
printf("\n");
}
}
