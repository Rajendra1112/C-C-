#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter the three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
	{printf("the greatest number is %d",a);}
		else if(b>a)
		{
		if(b>c)
		{
		printf("the greatest number is %d",b);}
	}
	}
	else
	{
	printf("the greatest number is %d",c);}
	getch();
	
	
	
	
	
}
