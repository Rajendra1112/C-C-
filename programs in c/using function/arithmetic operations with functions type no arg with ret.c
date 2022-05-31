#include<stdio.h>
float op();
main()
{
    float res;
    res=op();
    printf(" %.2f",res);
}
float op()
{
    float a,b,r;char c;
    printf("\nEnter your desired operator");
    scanf(" %c",&c);
    printf("Enter two numbers");
    scanf("%f %f",&a,&b);
    if (c=='+')
    {
        r=a+b;
    }
    else if (c=='-')
    {
        if(a>b)
        {
            r=a-b;
        }
        else
        {
            r=b-a;
        }
    }
    else if (c=='*')
    {
        r=a*b;
    }
    else if (c=='/')
    {
        r=a/b;
    }
    else
    {
        printf("\nWrong operator!!!");
    }
    printf("%.2f %c %.2f = ",a,c,b);
    return r;
}
