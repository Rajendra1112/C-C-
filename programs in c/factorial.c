#include<stdio.h>
int factorial(int);
int main()
{
	int ans,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	ans=factorial(n);
	printf("result:%d",ans);
	
}
int factorial(int x)
{
	int facto;
	if(x==0)
	{
		return 1;
	}
	else
	facto=x*factorial(x-1);
	return(facto);
}
