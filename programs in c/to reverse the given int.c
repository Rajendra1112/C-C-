#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,a;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	printf("%d",sum);
	getch();
}
