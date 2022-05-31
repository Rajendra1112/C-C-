//Conversion from class type to basic type.
#include<iostream>
#include<conio.h>
using namespace std;
class conversion
{
	private:
		int i;
		float f;
		public:
			conversion()
			{
				i=12;
				f=8.8;
			}
			operator int()
			{
				return i;
			}
			operator float()
			{
				return f;
			}
};
int main()
{
	int in;
	float fl;
	conversion c;
	in=c;
	fl=c;
	cout<<"after class type to basic type:\n";
	cout<<"value of in is:"<<in;
	cout<<endl<<"value of fl is:"<<fl;
	return 0;
	getch();
}
