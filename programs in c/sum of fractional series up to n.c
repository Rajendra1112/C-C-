#include<stdio.h>
#include<conio.h>
int main(){
int i,n;
float sum=0;
printf("enter the number:");
scanf("%f",n);
for(i=1; i<=n; i++)
{
sum=sum+(float)1/i;
if(i==1)
printf("1+",i);
else if(i==n)
printf("1/%d=",i);
else
printf("1/%fd",i);
}
printf("%f",sum);
getch();
}
