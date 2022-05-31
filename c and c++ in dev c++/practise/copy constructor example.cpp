#include<iostream>
#include<conio.h>
using namespace std;
class point
{
	private:
		int x,y;
		int c,d;
		public:
			point(int a,int b)//paramatized constructor
			{
				x=a;
				y=b;
			}
			point(point &p)//copy constructor
			{
				c=p.x;
				d=p.y;
			}
			void show()
			{
				cout<<"value of c is:"<<c;
				cout<<"\nvalue of d is:"<<d;
			}
};
int main()
{
	point p1(20,30);//call paramatized constructor
	point p2(p1);//call copy constructor
	p2.show();
	return 0; 
	getch();
}
