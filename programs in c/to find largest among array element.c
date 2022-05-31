#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4]={11,13,4,66};
	int i,large=a[0];
	for(i=1;i<4;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("largest no is %d",large);
	getch();
}
