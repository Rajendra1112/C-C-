#include<iostream>
using namespace std;
class comparision
{
	private:
		int rs;
		public:
			comparision()
			{
				rs=0;
			}
			void get()
			{
			cout<<"enter rupees:";
			cin>>rs;
				
			}
			int operator <(comparision &c)
			{
				if(rs<c.rs)
				{
					return 1;
				}
				else
				return 0;
			}
};
int main()
{
	comparision c1,c2;
	c1.get();
	c2.get();
	if(c1<c2)
	{
		cout<<"rupees of c1 is smaller";	
	}
	else
	{
	cout<<"rupees of c2 is smaller";
}
return 0;
}

