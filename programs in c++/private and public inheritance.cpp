#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int x;
		protected:
			int y;
			public:
				int z;
	A()
	{
		x=12;
		y=19;
		z=34;
	}
};
class B:private A
{
	public:
		void show()
		{
			cout<<"class B is private inheritance of A so following happen:"<<endl;
			cout<<"x is not accessbile"<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
class C:public B
{
	private:
		int a;
		public:
		C()
		{
			a=88;
			cout<<"a="<<a;
			cout<<endl;
		}
		void display()
		{
			cout<<"x,y,z are not accessbile."<<endl;/*class C is publicly define from B but B is privately define
			from class A.so data member of A is not accessed by class C*/
		}
};
int main()
{
	B b1;
	b1.show();
	C c1;
	c1.display();
	return 0;
	getch();
}
