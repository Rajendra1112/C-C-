#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		char name[20];
		int roll,semister;
		public:
			void get()
			{
				cout<<"enter the name of student:";
				cin>>name;
				cout<<"enter the roll no of student:";
				cin>>roll;
				cout<<"enter the semister of student:";
				cin>>semister;
				cout<<endl;
			}
			void show()
			{
				cout<<"name is:"<<name;
				cout<<endl<<"roll no is:"<<roll;
				cout<<endl<<"semister is:"<<semister;
			}
};
int main()
{
	student s1,s2,s3;
	s1.get();
	s2.get();
	s3.get();
	s1.show();
	s2.show();
	s3.show();
	return 0;
	getch();
}
