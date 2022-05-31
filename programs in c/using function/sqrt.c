#include<stdio.h>
#include<math.h>
int data(float);
 float main()
{
int firstnum;
     float sqrroot,d;
     printf("enter any number:");
     scanf("%d",&firstnum);
d=data(firstnum);
printf("the square root of %d is %f",firstnum,d);
}
int data(float num)
{
int n;
n=sqrt(num);
return n;
}
