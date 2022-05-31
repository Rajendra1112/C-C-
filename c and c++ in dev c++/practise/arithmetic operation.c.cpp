#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,add,sub,mul,div,rem;
    printf("enter the numbers: \n");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
	rem=a%b;
    printf("the sum is:%d\n",add);
    printf("the sub is:%d\n",sub);
    printf("the mul is:%d\n",mul);
    printf("the div is:%d\n",div);
    printf("the rem is:%d\n",rem);
    getch();
    return 0;
}

