#include<iostream>
int fibonacci(int);
using namespace std;
int main()
{
	int n,i;
	cout<<"how many terms you want in fibonacci series:";
	cin>>n;
	for(i=0;i<n;i++)
{
	fibonacci(i);
	cout<<fibonacci(i);
	cout<<",";
}
return 0;
}
int fibonacci(int n)
{
	if(n==0||n==1)
		return n;
	else 
	return (fibonacci(n-1)+fibonacci(n-2));
}
