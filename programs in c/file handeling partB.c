#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("new.txt","w");
	printf("enter one line and press eof:\n");
	scanf("%c",&ch);
	while(ch=getc(fp)!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("output is:\n");
	fp=fopen("new.txt","r");
	while(ch=getc(fp)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
