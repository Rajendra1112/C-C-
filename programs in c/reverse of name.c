#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char c[20];
	printf("enter your name\n");
	gets(c);
	strrev(c);
	puts(c);
	getch();
}
