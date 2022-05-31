#include<stdio.h>
#include<conio.h>
void main()
{
	int sales;
	printf("Enter the total sales in the month : ");
	scanf("%d",&sales);
	if(sales<5000)
	printf("The comission this month is 5%%");
	else
	printf("The comission this month is 10%%");
	getch();
}


