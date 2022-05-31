#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,count=0;
printf("enter the word to find no of vowels letter:\n");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='I'||a=='i'||a=='o'||a=="O"||a=='u'||a=='U')
{
count=count+1;
}
}
printf("the no of vowels letter in given word is %d",count);
}
