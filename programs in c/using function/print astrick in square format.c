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
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("*");
		}
	printf("\n");
	}
}
