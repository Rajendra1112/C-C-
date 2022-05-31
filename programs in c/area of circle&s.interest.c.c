#include<stdio.h>
#include<conio.h>
int main(){
	int r,area;
	printf( "enter the radius:\n");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("the area is:%d \n" ,area);
	{
		int principle,time,rate,interest;
		printf( "\n enter the principle:");
		printf( "\n enter the time:");
		printf( "\n enter the rate:");
		scanf("%d %d %d",&principle,&time,&rate);
		interest=(principle*time*rate)/100;
		printf("the interest is:%d",interest);
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
