#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int rem(int,int);
int main()
{
	int addition,subtraction,multiplication,division,remainder;
	addition=add(10,7);
	subtraction=sub(10,7);
	multiplication=mul(10,7);
	division=div(10,7);
	remainder=rem(10,7);
	printf("the sum of given number is %d\n",addition);
	printf("the sub of given number is %d",subtraction);
	printf("the mul of given number is %d\n",multiplication);
	printf("the div of given number is %d\n",division);
	printf("the rem of given number is %d\n",remainder);
	getch();
}
int add(int x,int y)
{
	int add;
	add=x+y;
	return(add);
}
	int  sub(int x,int y)
	{
		int sub;
		sub=x-y;
		return(sub);
	}
	int mul(int x,int y)
	{
		int mul;
		mul=x*y;
		return(mul);
	}
	int div(int x,int y)
	{
		int div;
		div=x/y;
		return(div);
	}
	int rem(int x,int y)
	{
	 int rem;
	 rem=x%y;
	 return(rem);
}
