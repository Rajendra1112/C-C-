#include<stdio.h>
#include<conio.h>
void odd(int);
void even(int);
int main()
{
	int n=1;
	odd(n);
}
void odd(int n)
{
	if(n<=10)
	{
		printf("\n%d",n+1);
		n++;
		even(n);
	}
}
void even(int n)
{
	if(n<=10)
	{
		printf("\n%d",n-1);
		n++;
		odd(n);
	}
}
