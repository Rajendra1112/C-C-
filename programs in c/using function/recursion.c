#include<stdio.h>
#include<conio.h>
int fun (int);
void main()
{
	int n=3;
	printf("%d",fun(n));
}
  int fun(int num)
{
  	if (num==1)
    {
		return 1;
  	}
  	else
  	{
  	return 1+fun (num-1);
  	}
}
