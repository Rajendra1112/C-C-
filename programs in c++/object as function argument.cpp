#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	private:
		int h,m;
		public:
			void get(int,int);
			void put(void);
			void sum(time,time);
};
void time::get(int a,int b)
{
	h=a;
	m=b;
}
void time::put(void)
{
	cout<<"hour is:"<<h;
	cout<<endl<<"minute is:"<<m;
	cout<<endl;
}
void time::sum(time t1,time t2)
{
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
}
int main()
{
	time t1,t2,t3;
	t1.get(10,20);
	t2.get(2,50);
	t3.sum(t1,t2);
	t1.put();
	t2.put();
	t3.put();
	return 0;
	getch();
}
