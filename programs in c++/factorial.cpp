#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int n,result;
	cout<<"enter the number for factorial:";
	cin>>n;
	result=factorial(n);
	cout<<"factorial is :"<<result;
	return 0;
}
int factorial(int n)
{
	int result;
	if(n==0)
	result=1;
	else 
	result=n*factorial(n-1);
	return result;
}
