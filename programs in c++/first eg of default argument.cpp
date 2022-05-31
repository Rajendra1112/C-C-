#include <iostream>
using namespace std;
void display(int=3,float=5.1);
int main()
{
	cout<<"no argument passed:";
    display();
    cout<<"\nfirst argument passed:";
    display(7);
    cout<<"\nboth argument passed:";
    display(5,8.9);
    return 0;
}
void display(int c,float n)
{
    cout<<"\nc="<<c;
    cout<<"\nn="<<n;
}
