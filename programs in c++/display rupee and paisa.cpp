//An example to illustrate use of class and object in c++
#include<iostream>
using namespace std;
#include<conio.h>
class currency
{
	private:
		int rs;
		int ps;
		public:
			void get()
			{
				cout<<"enter rupees:";
				cin>>rs;
				cout<<"enter paisa:";
				cin>>ps;
			}
			void show()
			{
				cout<<"rupees is:"<<rs;
				cout<<"\npaisa is:"<<ps;
			}
};
int main()
{
	currency c1,c2;
	c1.get();
	c2.get();
	c1.show();
	c2.show();
	getch();
	}
