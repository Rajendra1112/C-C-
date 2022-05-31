#include<iostream>
#include<conio.h>
using namespace std;
class weight
{
	private:
		int gm,kg;
		public:
			void get(int,int);
			void put(void);
			void sum(weight,weight);
};
void weight::get(int a,int b)
{
	kg=a;
	gm=b;
}
void weight::put(void)
{
	cout<<"WEIGHT IN KG:"<<kg;
	cout<<"\nweight in gm:"<<gm;
}
void weight::sum(weight w1,weight w2)
{
	gm=w1.gm+w2.gm;
	kg=gm/1000;
	gm=gm%1000;
	kg=kg+w1.kg+w2.kg;
}
int main()
{
	weight w1,w2;
	weight w3;
	w1.get(10,30);
	w2.get(3,40);
	w1.put();
	w2.put();
	w3.sum(w1,w2);
	w3.put();
	return 0;
	getch();
	
}
