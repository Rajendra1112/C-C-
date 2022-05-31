#include<stdio.h>
int factorial(int);
int main()
{
    int n,f;
    printf("Enter the value of n");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of the no. %d is : %d",n,f);
}
int factorial(int n)
{
    int f;
    if (n==1)
        return 1;
    else
        f=n*factorial(n-1);
    return f;
}
/*
int f;
for(f=1;n>1;n--)
{
    f*=n;
}
return f;
*/
