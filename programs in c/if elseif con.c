#include<stdio.h>
#include<conio.h>
 int main(){
	int marks;
	printf("enter your marks: \n");
	scanf("%d",&marks);
	if(marks>79)
	{
	printf("you got distinction");}
	else if(marks>59)
	{
	printf("you got first division");}
	else if(marks>49)
	{
	printf("you got second division");}
	else if(marks>39)
	{
	printf("you got third division");
	}
	else
	printf("you are failed");
	getch();
	
	
	
	
}
