// Without argument and without return//
#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
	
}
void add()
{
	int x,y,add;
	printf("Enter any two numbers to be added: ");
	scanf("%d %d",&x,&y);
	add = x+y;
	printf("The sum is %d",add);
	getch();
}
