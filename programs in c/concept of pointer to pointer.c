#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,*p,**y;
	p=&a;
	y=&p;
	printf("the address of a is %p",&a);
	printf("\nthe address of a is %p",p);
	printf("\n the address of a is %p",*y);
	printf("\nthe value of a is %d",a);
	printf("\nthe value of a is %d",*p);
	printf("\n the value of a is %d",**y);
	getch();
}
