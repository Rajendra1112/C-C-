#include<iostream>
#include<conio.h>
using namespace std;
class rectangleb;
class rectanglea
{
private:
	int length,breadth;
	public:
		rectanglea(int x,int y)
		{
			length=x;
			breadth=y;
		}
		friend void disp(rectanglea,rectangleb);
};
class rectangleb
{
	private:
		int l,b;
		public:
			rectangleb(int m,int n)
			{
				l=m;
				b=n;
			}
			friend void disp(rectanglea,rectangleb);
};
void disp(rectanglea r1,rectangleb r2)
{
	cout<<"value of length and breadth of rectanglea is:";
	cout<<endl<<"length="<<r1.length<<"\tbreadth="<<r1.breadth;
	cout<<endl<<"value of length and breadth of rectangleb is:";
	cout<<endl<<"length="<<r2.l<<"\tbreadth="<<r2.b;
}
int main()
{
	rectanglea r1(2,3);
	rectangleb r2(5,6);
	disp(r1,r2);
	return 0;
	getch();
}
