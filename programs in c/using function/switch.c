#include<stdio.h>
void no(int);
int main()
{
int n;
printf("\nWhich of these websites you visit the most?");
printf("\nSelect 1 for FACEBOOK, 2 for YAHOO! and 3 for GOOGLE.");
printf("\n1=>FACEBOOK \n2=>YAHOO! \n3=>GOOGLE\n");
scanf("%d",&n);
no(n);
}
void no(int n)
{
switch(n)
{
case 1:
printf("\nYou use FACEBOOK.");
break;
case 2:
printf("\nYou use YAHOO!.");
break;
case 3:
printf("\nYou use GOOGLE.");
break;
default:
printf("\nYou have entered an invalid option.");
}
}
