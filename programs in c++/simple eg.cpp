#include<iostream>
using namespace std;
class eg
{
	private:
		float p;
		public:
			void get()
			{
				cout<<"enter paisA:";
				cin>>p;
			}
			void show()
			{
				p=p%100;
				cout<<"paisa:"<<p;
			}
};
int main()
{
	eg e;
	e.get();
	e.show();
	return 0;
}
