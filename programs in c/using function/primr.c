#include<stdio.h>
void no(int);
main()
{
int num;
printf("enter any no");
scanf("%d",&num);
no(num);
}
void no(int num)
{
    int i,count;
    if (num==1)
    {
        printf("1 is niether prime nor composite");
    }
    else
{
    for(i=2;i<=num-1;i++)
    {
        if(num%i == 0)
    {
      count=1;
         break;
    }  }}
if(count ==1)
{
    printf("the no is composite");
}
else
{
    printf("the number is prime");
}}
