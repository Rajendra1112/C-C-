#include<stdio.h>
void odd(int,int);
int main()
{
int n,i=0;
printf("enter the value of n");
scanf("%d",&n);
odd(i,n);
}
void odd(int i,int n)
{
if(i==n)
{
printf("%d\n",i);
return;
}
else
{
if(i%2==0)
{
printf("%d\n",i+1);}
else
{
printf("%d\n",i-1);}

}
return odd(i+1,n);
}
