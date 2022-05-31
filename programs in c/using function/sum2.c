#include <stdio.h>
int sum(int,int);
int main()
{
  int a,b,d;
    printf("enter the 1st no:");
    scanf("%d",&a);
    printf("enter the 2nd no.:");
    scanf("%d",&b);
  d=sum(a,b);
  printf("sum of 2 no is %d",d);
  }
  int sum(int a,int b)
  {
  int c;
  c=a+b;
  return c;
  }
