#include<iostream>
using namespace std;
class fnoverloading
{
		public:
			void get(int a)
			{
				cout<<"value of x:"<<a;
				cout<<endl;
			}
			void get(int a,float b)
			{
				cout<<"value of x and y are:"<<"x="<<a<<"y="<<b;
			}
};
int main()
{
	int x;
	float y;
	fnoverloading f;
	cout<<"enter the value of x and y:";
	cin>>x>>y;
	f.get(x);
	f.get(x,y);
	return 0;
}
