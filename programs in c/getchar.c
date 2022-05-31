#include<stdio.h>
int main()
{
	char al;
	printf("enter the alpha\n");
	al=getchar();
	if(isalpha(al))
	printf("the enter data is alphabet");
	else
	if(isdigit(al))
	printf("digit");
	else
	printf("is not alphanumeric");
}
