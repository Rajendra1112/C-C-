#include<stdio.h>
void no(int,int,int);
main()
{
int a,b,c;
printf("enter any 3 number");
scanf("%d %d %d",&a,&b,&c);
no(a,b,c);
}
void no(int a,int b,int c)
{
//compound statement
    printf("a-=b=%d \n",a-b);
    printf("a+=b=%d \n",a+b);
    printf("a*=b=%d \n ",a*b);
    printf("a/=b=%d \n",a/b);
    printf("a%=b=%d \n",a%b);
    //relation operator
    printf("a>b=%d \n",a>b);
    printf("a<b=%d \n",a<b);
    printf("a==b=%d \n",a==b);
    printf("a!=b=%d \n",a!=b);
    printf("a<=b=%d \n",a<=b);
    printf("a>=b=%d \n",a>=b);
       //logical operator
     if(a>b && a>c)
        printf("the greatest no is %d \n",a);
     else if (b>a && b>c)
        printf("the greatest no is %d \n",b);
     else
     printf("the greatest no is %d \n",c);
    //unary operator
     a=a++;
     a=a--;
     a=--a;
     a=++a;
     printf("the value of a after unary operation is %d",a);
}


