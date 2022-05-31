#include<iostream>
#include<conio.h>
using namespace std;
class dist
{
	public:
		int feet,inch;
		dist()
		{
			feet=0;
			inch=0;
		}
		dist(int f,int i)
		{
			feet=f;
			inch=i;
		}
		dist operator +(dist d2)
		{
			dist d3;
			d3.feet=feet+d2.feet;
			d3.inch=inch+d2.inch;
			return d3;
		}
};
int main()
{
	dist d1(22,11),d2(10,20);
	dist d3;
	d3=d1+d2;
	cout<<"total feet is:"<<d3.feet<<"\t total inches is:"<<d3.inch;
	return 0;
	getch();
}
