#include<stdio.h>
void no(int);
int main()
{
int age;
printf("enter your age");
scanf("%d",&age);
no(age);
}
void no(int age)
{
if(age>=18)
{
goto g;
g:
    printf("you are  eligible");
}
else
{
goto s;
s:printf("you are not eligible");
}
}
