#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float r,area;
	printf( "enter the radius:\n");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("the area is:%f \n" ,area);
	{
		int principle,time,rate,interest,ci;
		printf( "enter the principle: \n");
		scanf("%f",&principle);
		printf( "enter the time: \n");
		scanf("%f",&time);
		printf( "enter the rate:\n");
		scanf("%f",&rate);
		interest=(principle*time*rate)/100;
		printf("the interest is:%f",interest);
		ci=priniple(pow(1+rate/100)*time-1);
		printf("the required interest is %f",ci);
		getch();
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
