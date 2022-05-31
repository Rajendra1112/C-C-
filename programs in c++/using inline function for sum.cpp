#include<iostream>
#include<conio.h>
using namespace std;
inline demo(int y)
{
	cout<<"require value of sum is:"<<y;
}
int main()
{
	int a,b,sum;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	sum=a+b;
	demo(sum);
	return 0;
	getch();
}
