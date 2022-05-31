#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employees
{
	private:
		char ename[20];
		int eid,esalary,econtactno;
	public:
		employees(int a,char *b,int c,int d)
		{
			eid=a;
			ename=b;
			esalary=c;
			econtactno=d;
			cout<<"eid is:"<<eid;
			cout<<endl<<"ename is:"<<*ename;
			cout<<endl<<"esalary is:"<<esalary;
			cout<<endl<<"econtactno is:"<<econtactno;
		}
};
int main()
{
	employees e1(1,"ram",20000,403);
	return 0;
	getch();
}
