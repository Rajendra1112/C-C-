#include<stdio.h>
void no(int);
main()
{
    int a;
printf("enter first no.");
scanf("%d",&a);

no(a);
}
void no(int a)
{
if(a%7==0)
printf("%d is divisible by 7",a);
else
printf("%d is not divisible by 7",a);
}
