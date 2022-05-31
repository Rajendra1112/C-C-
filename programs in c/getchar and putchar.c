#include<stdio.h>
int main()
{
	char al;
	printf("enter the alpha\n");
	al=getchar();
	if(islower(al))
	{
		putchar(toupper(al));
	}
	else
	putchar(tolower(al));
}
