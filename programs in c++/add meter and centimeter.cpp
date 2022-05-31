// wap to take meter and centimeter and add them then display the result in meter
#include<iostream>
#include<conio.h>
using namespace std;
class length
{
	private:
		float meter,centimeter;
		public:
			void get()
			{
				cout<<"enter the length in meter:";
				cin>>meter;
				cout<<"enter the length in centimeter:";
				cin>>centimeter;
			}
			void display()
			{
				centimeter=centimeter/100;
				meter=meter+centimeter;
				cout<<"final result in meter is:"<<meter;
			}
};
int main()
{
	length l1;
	l1.get();
	l1.display();
	return 0;
	getch();
}
