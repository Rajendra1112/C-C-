#include<iostream>
using namespace std;
class example
{
    private:
    int a,b;
    public:
    example(){
        a=0;b=9;
    }
    void display(){
        cout<<"a="<<a<<"\nb="<<b;
    }
       example(char ch1[],char ch2[]){
        cout<<"\nfagrument="<<ch1;
        cout<<"\nlargument="<<ch2;
    }
    example(int c,int d){
        cout<<"\nc="<<c<<"\nd="<<d;
    }
};
int main(){
    example e;
    e.display();
    example e2("rajendra","thapa");
    example e3(15,20);
    return 0;
}