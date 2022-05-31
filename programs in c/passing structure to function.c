#include<stdio.h>
#include<conio.h>
struct student
{
	char sname[10];
	int sroll;
};
pass(struct student);
int main()
{
	struct student s;
	printf("enter the name of stu:");
	scanf("%s",s.sname);
	printf("\nenter the roll no of stu:");
	scanf("%d",&s.sroll);
	pass(s);
	getch();
}
pass(struct student s)
{
	printf("stu name:%s",s.sname);
	printf("\nstu rollno:%d",s.sroll);
}
