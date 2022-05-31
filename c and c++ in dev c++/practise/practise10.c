#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float p,t,r,si,ci,sa,ca;
printf("Enter principal in Rs:");
scanf("   %f",&p);
printf("\nEnter time in year:");
scanf("%f",&t);
printf("\nEnter rate in percent per annum:");
scanf("%f",&r);
si=(p*t*r)/100;
printf("\nSimple interest:%.2f",si);
ci=p*(pow(1+r/100,t)-1);
printf("\nCompound interest:%.2f",ci);
sa=p+si;
printf("\nSimple amount:%.2f",sa);
ca=p+ci;
printf("\nCompound amount:%.2f",ca);
printf("\nThe difference between compound and simple amount:%.2f",ca-sa);
getch();
}
