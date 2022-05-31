#include<iostream>
using namespace std;
inline void result(int a,int b)
{
	int r;
	r=a+b;
	cout<<"result is:"<<r;
};
//void result(int,int);
int main()
{
	int f,s;
	cout<<"enter the first no and second no:";
	cin>>f>>s;
	result(f,s);
}
