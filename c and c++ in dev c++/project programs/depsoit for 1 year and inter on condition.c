#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int deposit,time,rate;
	float ci,amount;
	printf("Enter the total deposit : ");
	scanf("%d",&deposit);
	printf("Enter the time : ");
	scanf("%d",&time);
	if(time>=5)
	rate=10;
	else if(time>=1&&deposit>=5000)
	rate=8;
	else if(time>=2&&deposit>=1000&&deposit<5000)
	rate=7;
	else if(time>=2&&deposit<1000)
	rate=5;
	else
	rate=3;
	ci=deposit*((pow(1+(rate*0.01),time))-1);
	amount=ci+deposit;
	printf("The compound interest is %.2f",ci);
	printf("\nThe compound amount is %.2f",amount);
	getch();
}

