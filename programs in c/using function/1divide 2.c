#include<stdio.h>
void no(int,int);
main()
{
int first_num,second_num;
printf("enter first no.");
scanf("%d",&first_num);
printf("enter second no.");
scanf("%d",&second_num);
no(first_num,second_num);
}
void no(int first_num,int second_num)
{
if(first_num%second_num==0)
printf("%d is divisible by %d",first_num,second_num);
else
printf("%d is not divisible by %d",first_num,second_num);

}
