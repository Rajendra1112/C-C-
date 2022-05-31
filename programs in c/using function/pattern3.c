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
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
}
