#include<stdio.h>
void op(int,int);
int main()
{
    int firstnum , secondnum ;
    printf("enter any 2 number:");
    scanf("%d %d",&firstnum,&secondnum);
    op(firstnum,secondnum);
    }
    void op(int firstnum,int secondnum)

{
int add , subtract , multiply , division , remainder;
    add=firstnum+secondnum;
    multiply=firstnum*secondnum;
    subtract=firstnum-secondnum;
    division=firstnum/secondnum;
    remainder=firstnum%secondnum;
    printf("sum of 2 number is %d",add);
    printf("\n difference between  2 number is %d",subtract);
    printf("\n multiplication of 2 number is %d",multiply);
    printf("\n division of 2 number is %d",division);
    printf("\n remainder of 2 number is %d",remainder);


}
