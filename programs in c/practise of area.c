#include<stdio.h>
int area(int,int);//function declaration
main()
{
	int l,b,area;
	printf("enter the length and breadth:\n");
	scanf("%d %d",&l,&b);
	area(l,b);//function call
	printf("area of rectangle is %d",area);
}
int area(int l,int b)//function defination
{
	int area;
	area=l*b;
	return(area);
	}

