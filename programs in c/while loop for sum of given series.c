#include<stdio.h>
#include<math.h>
int main(){
int i,k,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
i=1;
while(i<=n)
{
k=pow(i,2);
sum+=k;
printf("%d\t",k);
i++;
}
printf("\nsum is above square is %d",sum);
}
