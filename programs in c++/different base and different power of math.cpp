#include<iostream>
#include<math.h>
using namespace std;
int recursive(int,int);
int main()
{
	int a,b,result;
	cout<<"enter prefix for given number:";
	cin>>a;
	cout<<"enter the base for above prefix:";
	cin>>b;
	result=recursive(a,b);
	cout<<result;
}
int recursive(int x,int y)
{
	int result;
if(x==0)
result=1;
else
result=y*recursive(x-1,y);
return result;
}
