#include<stdio.h>
int main(){
float i;
float sum=0;
for(i=1; i<=10; i++)
{
sum+=(float)1/i;
if(i==1)
printf("1+",i);
else
printf("1/%f+",i);
}
printf("\n%f",sum);
}
