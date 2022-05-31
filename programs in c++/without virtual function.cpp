// Non Virtual function program
#include<iostream>
#include<conio.h>
using namespace std;
class example
{
	public:
		void show()
		{
			cout<<"this is class of base:";
		}
};
class child:public example
{
	public:
		void show()
		{
		cout<<"this is class of child";
}
};
int main()
{
	example *ptr;
	child c;
	ptr=&c;
	ptr->show();
	return 0;
	getch();
}

