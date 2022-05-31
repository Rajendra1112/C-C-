#include<iostream>
#include<conio.h>
using namespace std;
class value
{
	private:
		int x,y;
		public:
			value()
			{
				x=0;
				y=0;
			}
			value(int a,int b)
			{
				x=a;
				y=b;
			}
			void operator =(value &v)
			{
				x=v.x;
				y=v.y;
			}
			void show()
			{
				cout<<"\nx:"<<x;
				cout<<"\ny:"<<y;
			}
};
int main()
{
	value v1(12,14),v2(15,18);
	cout<<"value of x and y for v1:\n";
	v1.show();
	cout<<endl<<"value of x and y for v2:";
	v2.show();
	v1=v2;
	cout<<"\nvalue of x and y for v1 after overloading:";
	v1.show();
	return 0;
	getch();
}
