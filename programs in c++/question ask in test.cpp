#include<iostream>
#include<conio.h>
using namespace std;
class currency
{
	private:
		float rs,ps;
		public:
			currency()
			{
				//cout<<"enter the rs and ps:";
				//cin>>rs>>ps;
				rs=10;
				ps=20;
				rs=rs+(ps/100);
				//cout<<"rupees is:"<<rs;
			}
			void display()
			{
				cout<<"rupees is:"<<rs;
				cout<<endl;
			}
			void getdata()
			{
				cout<<"enter the value of rupees:";
				cin>>rs;
				cout<<"enter the value of paisa:";
				cin>>ps;
			}
			void showdata()
			{
				float x;
				x=rs+float(ps/100);
				cout<<"\ntotal rupees is:\t"<<x;
			}
};
int main()
{
	currency c1,c2;
	c1.display();
	c2.display();
	currency c3,c4,c5;
	c3.getdata();
	c4.getdata();
	c5.getdata();
	c3.showdata();
	c4.showdata();
	c5.showdata();
	return 0;
	getch();
}
