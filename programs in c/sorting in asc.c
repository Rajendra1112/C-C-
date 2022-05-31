#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],temp,i,j,n;
	printf("how many number U want to sort?\n");
	scanf("%d",&n);
	printf("\nenter the numbers to sort in asc:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
printf("before sort:\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
printf("\nnumber after sort:\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
getch();
}
