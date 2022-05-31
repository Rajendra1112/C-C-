#include<stdio.h>
struct emp
{
	 int eno;
	 char ename[20];
	 float esalary;
};
int main()
{
	struct emp e;
	printf("the size of structure is %d",sizeof(struct emp));
}
