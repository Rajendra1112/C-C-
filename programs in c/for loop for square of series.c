#include<stdio.h>
#include<math.h>
int main(){
int i,k,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
k=pow(i,2);
sum+=k;
printf("%d\t",k);
}
printf("\nsum is above square is %d",sum);
}
