#include <stdio.h>
#include<math.h>
void comp(double,double,double);
int main()
{
double principle,time,rate,d;
printf("enter any principle time rate ");
scanf(" %lf %lf %lf",&principle,&time,&rate);
comp(principle,time,rate);
}
void comp(double principle,double time,double rate)
{
double r,s,p,interest;
r=rate/100;
s=r+1;
p=pow(s,time);
interest=principle*(p-1);
printf("%lf",interest);
}

