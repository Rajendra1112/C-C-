#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number to be reverse:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		sum*=10;
		sum=sum+n%10;
		n=n/10;
	}
}
