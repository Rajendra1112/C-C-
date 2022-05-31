#include<stdio.h>
void no(int);
main()
{
int n;
printf("enter no.");
scanf("%d",&n);
no(n);
}
void no(int n)
{
    int rem;
rem = n%2;
if(rem == 0)
{
printf("\nThe number is even.");
}
else
{
printf("\nThe number is odd");
}
}
