#include<stdio.h>
int area(int,int);//function declaration
void main()
{
	int l,b,a;
	printf("enter the length and breadth:\n");
	scanf("%d %d",&l,&b);
	a=area(l,b);//function call
	printf("area of rectangle is %d",a);
}
int area(int l,int b)//function defination
{
	int area;
	area=l*b;
	return(area);
	}

