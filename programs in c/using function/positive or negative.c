#include<stdio.h>
void no(int);
int main()
{
int n;
printf("enter your no");
scanf("%d",&n);
no(n);
}
void no(int num)
{
if(num < 0)
{
printf("\nThe number is negative");
}
else
{
printf("\n the no is positive");
}

}
