#include<stdio.h>
#include<conio.h>
int main(){
int a,b,i;
char c;
printf("enter the two numbers: \n");
scanf("%d%d",&a,&b);
for(i=1; i<=5; i++)
{
printf("\n enter any arithmetic operator:");
scanf(" %c",&c);
switch(c)
{
case '+':printf("%d+%d=%d",a,b,a+b);
break;
case '-':printf("%d-%d=%d",a,b,a-b);
break;
case '*':printf("%d*%d=%d",a,b,a*b);
break;
case '/':printf("%d/%d=%d",a,b,a/b);
break;
case '%':printf("%d%%%d=%d",a,b,a%b);
break;
default:printf("invalid option given");
}
}
getch();
}
