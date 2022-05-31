#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="rajendra";
	int i,j,length;
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
