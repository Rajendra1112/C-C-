#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,fah;
	printf("enter the temperature in cel");
	scanf("%f",&cel);
	fah=180*cel/100+32;
	printf("the required temp in fah is %f",fah);
	getch();
}
