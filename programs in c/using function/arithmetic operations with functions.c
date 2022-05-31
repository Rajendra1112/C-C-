#include<stdio.h>
float op(float,char,float);
main()
{
    float a,b,res;char c;
    printf("\nEnter your desired operator");
    scanf(" %c",&c);
    printf("Enter two numbers");
    scanf("%f %f",&a,&b);
    res=op(a,c,b);
    printf("%.2f %c %.2f = %.2f",a,c,b,res);
}
float op(float a,char c,float b)
{
    float r;
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
    return r;
}
