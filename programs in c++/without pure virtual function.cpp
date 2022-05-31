//Simple program without pure virtual function
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"this is class of A:";
		}
};
class B:public A
{
	public:
		void show()
		{
		cout<<endl<<"this is class of B";
}
};
class C:public A
{
	public:
		void show()
		{
			cout<<endl<<"this is class C:";
			cout<<endl;
		}
};
int main()
{
	A *list[2];
	B b;
	C c;
	list[0]=&b;
	list[1]=&c;
	list[0]->show();
	list[1]->show();
	return 0;
	getch();
}

