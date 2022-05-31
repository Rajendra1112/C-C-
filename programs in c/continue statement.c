#include<stdio.h>
int main()
{
	int i=1,x=1;
for(i=2;i<=15;++i)
{
	if(i%2==1)
	x+=i;
	else
	x--;
	printf("%d",x);
	continue;
}
printf("\nx=%d",x);
}

