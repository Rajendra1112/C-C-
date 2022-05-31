/*program to find area of triangle.use the value of height initialized to 1.2*/
#include<iostream>
#include<conio.h>
using namespace std;
class point
{
	private:
		int b;
		float h;
		public:
			point()
			{
				h=1.2;
			}
			void get()
			{
				cout<<"enter the value of base:";
				cin>>b;
			}
			void show()
			{
				float area;
				area=(b*h)*1/2;
				cout<<"require area is:\t"<<area;
			}
};
int main()
{
	point p1;
	p1.get();
	p1.show();
	return 0;
	getch();
}
