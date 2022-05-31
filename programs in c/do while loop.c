#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,i,sum=0;
	float avg;
	printf("how many number you want to enter:\n");
	scanf("%d",&n);
	do
	{
		printf("enter a number:\n");
		scanf("%d",&num);
		sum=sum+num;
		i++;
		
	}while(i<n);
	avg=sum/n;
	printf("the sum:%d",sum);
	printf("the avg:%.2f",avg);
}
