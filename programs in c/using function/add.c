//to add two numbers,with argument and with return value//
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int addition;
	addition = add(10,7);
	printf("The addition of two numbers is %d",addition);
	getch();
	
}
int add(int x, int y)
{
	int add;
	add = x+y;
	return(add);
	
}
