//Conversion from basic type to class type
#include<iostream>
#include<conio.h>
using namespace std;
class conversion
{
	private:
		int meter;
		public:
			conversion()
			{
				
			}
			conversion(float km)
			{
				meter=km*1000;
				cout<<"value in meter is:"<<meter;
			}
};
int main()
{
	conversion c;
	float km;
	cout<<"enter the length in km:";
	cin>>km;
	c=km;
	return 0;
	getch();
}

