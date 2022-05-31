#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int l;
	char a[20],b[20];
	printf("enter to word to check palindrom or not\n");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(a);
	l=strcmp(a,b);
	if(l==0)
	{
		printf("given word is palindrome");
	}
	else
	{
		printf("given word is not palindrome");
	}
	getch();
}
