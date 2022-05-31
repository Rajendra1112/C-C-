#include<iostream>
#include<conio.h>
using namespace std;
class length
{
	private:
		int m,c;
		public:
			void getdata()
			{
				cout<<"enter the meter:";
				cin>>m;
				cout<<"enter the centimeter:";
				cin>>c;
			}
			void showdata(length l1)
			{
				int x,y;
				x=m+l1.m;
				y=c+l1.c;
				x=x+c/100;
				y=y%100;
				cout<<"the result in meter is"<<x;
				cout<<"the result in centimeter is"<<y;
			}
};
int main()
{
	length l1,l2;
	l1.getdata();
	l2.getdata();
	l2.showdata(l1);
	return 0;
	getch();
}
