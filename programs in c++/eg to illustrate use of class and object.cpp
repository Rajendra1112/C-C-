// An example to illustrate use of class and object
#include<iostream>
#include<conio.h>
using namespace std;
class currency
{
	private://access specifier
		float rupee,paisa;//data member
		public://access specifier
			void get()//member function
			{
				cout<<"enter the rupees to display:";
				cin>>rupee;
				cout<<"enter the paisa to display:";
				cin>>paisa;
			}
			void show()//member fuction
			{
				cout<<"rupees is:"<<rupee;
				cout<<endl<<"paisa is:"<<paisa;
				cout<<endl;
			}
};//end of class
int main()
{
	currency c1,c2;//c1 and c2 are the object of class
	c1.get();
	c1.show();
	c2.get();
	c2.show();
	return 0;
	getch();
}
