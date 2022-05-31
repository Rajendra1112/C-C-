#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("the address of a is %p",&a);
	printf("\nthe address of a is %p",p);
	printf("\nthe value of a is %d",a);
	printf("\nthe value of a is %d",*p);
}
