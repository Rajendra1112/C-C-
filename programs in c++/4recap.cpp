#include<iostream>
using namespace std;
class example
{
    private:
    int a,b;
    public:
    example()
    {
        a=10;
        b=20;
        cout<<"value of a and b are:"<<"\na="<<a<<"\nb="<<b;
        cout<<"\ninside constructor";
    }
    ~example(){
        cout<<"\ninside destructor.";
    }
};
int main(){
    example e1;
    return 0;
}