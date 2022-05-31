#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,ans;
	printf("enter the nuber to factorial:\n");
	scanf("%d",&n);
	ans=factorial(n);
	printf("result is %d",ans);
	getch();
}
int factorial(int x)
{
	int facto;
	if(x==0)
	{
		return 1;
	}
	else 
	{
		facto=x*factorial(x-1);
		return facto;
	}
}
