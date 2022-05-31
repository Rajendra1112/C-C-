#include<stdio.h>
main()
{
    int n,i,sum,k;
    i=1,sum=0;
    printf("Enter Maximum Value(n):");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        k=pow(i,2);
        sum=sum+i*i;
        ++i;
        printf("%d\t",k);
    }
    printf("\nSum of squares of numbers from 1 to %d is :%d ",n,sum);
}
