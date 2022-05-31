//Wap for constructor overloading
#include<iostream>
#include<conio.h>
using namespace std;
class overloading
{
	private:
		int a,b;
		public:
			overloading()
			{
				a=2;
				b=3;
			}
			overloading(int x,int y)
			{
				a=x,b=y;
			}
			void display()
			{
				cout<<"the sum of a and b is:"<<a+b;
				cout<<endl;
			}
};
int main()
{
	overloading o1,o2(22,33);
	o1.display();
	o2.display();
	return 0;
	getch();
}
