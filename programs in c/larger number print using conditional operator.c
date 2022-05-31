#include<stdio.h>
int main()
{
	int num1,num2,larger;
	printf("enter any two number:\n");
	scanf("%d%d",&num1,&num2);
	larger=num1>num2?num1:num2;
	printf("larger is:%d",larger);
}
