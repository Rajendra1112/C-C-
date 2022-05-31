#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int num,answer;
	printf("enter any numbers");
	scanf("%d",&num);
	answer=factorial(num);
	printf("the factorial given number is %d",answer);
	
}
int factorial(int x)//function defination
{
	int facto;
	if(x==1)
	{
		return 1;
			}	
			else
			{
				facto=x*factorial(x-1);
				return(facto);
				}
			}
