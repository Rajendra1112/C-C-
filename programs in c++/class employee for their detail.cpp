//Wap in c++ for employee having id name salary address con no.
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	private:
		int id;
		char name[20],address[20];
		long int salary,contact_no;
		public:
			void get()
			{
				cout<<"enter employee id no:";
				cin>>id;
				cout<<"enter employee name:";
				cin>>name;
				cout<<"enter employee salary";
				cin>>salary;
				cout<<"enter employee address:";
				cin>>address;
				cout<<"enter employee contact no:";
				cin>>contact_no;
				cout<<endl;
			}
			void show()
			{
				cout<<"employee id is:"<<id;
				cout<<endl<<"employee name is:"<<name;
				cout<<endl<<"employee salary:"<<salary;
				cout<<endl<<"employee address is:"<<address;
				cout<<endl<<"employee contact no is:"<<contact_no;
			}
};
int main()
{
	employee e1,e2,e3,e4,e5;
	e1.get();
	e2.get();
	e3.get();
	e4.get();
	e5.get();
	e1.show();
	e2.show();
	e3.show();
	e4.show();
	e5.show();
	return 0;
	getch();
}
