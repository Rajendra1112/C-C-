#include<stdio.h>
int greater(int,int);
 int main()
{
    int firstnum , secondnum ,d;
    printf("enter any 2 number:");
    scanf("%d %d",&firstnum,&secondnum);
    d=greater(firstnum,secondnum);
    printf("the  greater no is %d",d);
    }
    int greater(int firstnum, int secondnum )
    {
        if(firstnum>secondnum)
    {
       return firstnum;
    }
    else if (secondnum>firstnum)
    {
    return secondnum;
    }
    }
