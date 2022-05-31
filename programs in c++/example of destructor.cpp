#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	private:
		int x,y;
		public:
			demo()
			{
				cout<<"inside constructor:"<<endl;
				x=10;
				y=13;
			}
			void show()
			{
				cout<<"x is:"<<x;
				cout<<"\ny is:"<<y;
			}
			~demo()
			{
				cout<<"\ninside destructor:";
			}
};
int main()
{
	demo d1;
	d1.show();
	return 0; 
	getch();
}
