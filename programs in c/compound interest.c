#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float p,t,r,ci;
	printf("enter the priciple: \n");
	printf("enter the time: \n");
	printf("enter the rate: \n");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*pow((1+r/100),t)-p;
	printf("the required ci is %f",ci);
	getch();
	
	
	
	
}
