#include <stdio.h>
#define PI 3.14
void area(float,float,float);
main()
{
float r1,r2,r3,d;
printf("enter 3 radius:");
scanf("%f %f %f",&r1,&r2,&r3);
area(r1,r2,r3);
}
void area(float r1,float r2,float r3)
{
float a1,a2,a3;
a1=PI*r1*r1;
a2=PI*r2*r2;
a3=PI*r3*r3;
printf("the area of circle are %f %f %f",a1,a2,a3);
}
