#include<stdio.h>
main()
{
char name[20];
int i;
printf("enter your name:");
gets(name);
printf("using for loop\n");
for(i=1;i<=10;i++)
{
printf("%s\n",name);
}
i=1;
printf("using while loop\n");
while(i<=10)
{
printf("%s\n",name);
i++;
}
printf("using do while loop\n");
i=1;
do
{
printf("%s\n",name);
i++;
}
while(i<=10);
}

