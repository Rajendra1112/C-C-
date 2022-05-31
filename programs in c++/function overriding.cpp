//function overriding program
#include<iostream>
using namespace std;
class overriding
{
	private:
		int roll;
		protected:
		char name[20];
		public:
			void get()
			{
				cout<<"enter your roll no:";
				cin>>roll;
			}
			void show()
			{
				cout<<"roll is:"<<roll;
				cout<<endl;
			}
};
class child:public overriding
{
	public:
		void get()
		{
			cout<<"enter your name:";
			cin>>name;
		}
		void show()
		{
			cout<<"your name is:"<<name;
		}
};
int main()
{
	overriding o1;
	o1.get();
	o1.show();
	child c1;
	c1.get();
	c1.show();
	return 0;	
}
