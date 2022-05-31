#include<stdio.h>
#include<conio.h>
int main()
{
int a=10;
float b=20.005;
void *p,*o;
p=&a;
o=&b;
printf("the value of a is %d",*(int *)p);
printf("the value of a is %f",*(float *)o);
}
