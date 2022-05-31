#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],i=0,n,sum=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(i<n)
	{
		sum=sum+pow(a[i],2);
		i++;
	}
	printf("%d",sum);
}
