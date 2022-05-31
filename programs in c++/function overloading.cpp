//function overloadin program
#include<iostream>
#include<conio.h>
using namespace std;
class overloading
{
	private:
		int x,y;
		public:
			void sum(int a)
			{
				int result;
				x=a;
				cout<<"enter value of y:";
				cin>>y;
				result=x+y;
				cout<<"sum is:"<<result;
				cout<<endl;
			}
			void sum(int a,int b)
			{
				x=a;
				y=b;
				int r;
				cout<<"value of x and y:";
				cout<<"\nx="<<x<<"\ty="<<y;
				r=x+y;
				cout<<"result is:"<<r;
			}
};
int main()
{
	overloading a1,a2;
	a1.sum(10);
	a2.sum(22,11);
	return 0;
	getch();
}
