#include<stdio.h>
int main()
{
	int i,j,asd[20],size,temp,loc,min;
	printf("enter array size:\n");
	scanf("%d",&size);
	printf("enter array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&asd[i]);
	}
	for(i=0;i<size-1;i++)
	{
		min=asd[i];
		loc=i;
		for(j=1+i;j<size;j++)
		{
			if(asd[i]>min)
			{
				min=asd[j];
				loc=j;
			}
		}
		temp=asd[i];
		asd[i]=asd[loc];
		asd[loc]=temp;
	}
		printf("ascending order is:\n");
		for(i=0;i<size;i++)
		{
			printf("%d",asd[i]);
		}
	}
