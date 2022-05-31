#include<stdio.h>
void op(float,char,float);
main()
{
    float a,b;char c;
    printf("\nEnter your desired operator");
    scanf(" %c",&c);
    printf("Enter two numbers");
    scanf("%f %f",&a,&b);
    op(a,c,b);
}
void op(float a,char c,float b)
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
    printf("%.2f %c %.2f = %.2f",a,c,b,r);
}
