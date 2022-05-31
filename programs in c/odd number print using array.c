#include<stdio.h>
void main(){
	int a[5];
	printf("enter the five number:");
	int i;
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("even number are:");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("\n%d",a[i]);
	}
}
