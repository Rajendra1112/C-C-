#include<stdio.h>
void s(char);
int main()
{
char name[5];
    printf("what is your name:");
    scanf(" %s", name);
s(name);
}
void s(char name)
{
printf("your name is %s",name);
}
