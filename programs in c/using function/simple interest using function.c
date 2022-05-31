#include<stdio.h>
void sinterest();
int main()
{
	sinterest();
}
void sinterest()
{
	int sinterest,p,t,r;
	printf("enter the principle-time-rate like this format\n");
	scanf("%d-%d-%d",&p,&t,&r);
	sinterest=p*t*r/100;
	printf("%d",sinterest);
}
