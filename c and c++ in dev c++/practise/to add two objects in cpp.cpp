#include<iostream>
#include<conio.h>
using namespace std;
class currency
{
	private:
		int r;
		int p;
		public:
			void getdata()
			{
				cout<<"enter the rupees:";
				cin>>r;
				cout<<"enter the paisa:";
				cin>>p;
			}
			void showdata(currency c2)
			{
				int x,y;
				x=r+c2.r;
				y=p+c2.p;
				x=x+y/100;
				y=y%100;
				cout<<"total rupees is:"<<x;
				cout<<endl<<"total paisa is:"<<y;
			}
};
int main()
{
	currency c1,c2;
	c1.getdata();
	c2.getdata();
	c1.showdata(c2);
	getch();
	return 0;
}
