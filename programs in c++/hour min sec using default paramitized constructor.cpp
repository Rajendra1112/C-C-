#include<iostream>
#include<conio.h>
using namespace std;
class clock
{
	private:
		int hourhand,minutehand,secondhand;
		int a,b,c;
		int x,y,z;
		public:
		clock()
			{
				minutehand=100;
				secondhand=30;
				cout<<"\nminutehand="<<minutehand;
				cout<<"\nsecondhand="<<secondhand;
			}
			clock(int a,int b,int c)
			{
			cout<<"\nhourhand:"<<a;
			cout<<"\nminutehand:"<<b;
			cout<<"\nsecondhand:"<<c;	
			}
			/*void get()
			{
				cout<<"\nenter the value of hr:";
				cin>>x;
				cout<<"enter the value of min:";
				cin>>y;
				cout<<"enter the value of sec:";
				cin>>z;
			}
			void show()
			{
				cout<<"\nhourhand="<<x;
				cout<<"\nminhand="<<y;
				cout<<"\nsecondhand="<<z;
			}*/
};
int main()
{
	clock c1;
	clock c2(12,30,40);
	clock c3(123,222,333);
	//c3.get();
	return 0;
	getch();
}
