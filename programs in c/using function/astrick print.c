#include<stdio.h>
#include<conio.h>
pattern();
int main()
{
	pattern();
	getch();
}
pattern()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("*",j);
		}
	printf("\n");
	}
}
