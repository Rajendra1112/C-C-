#include<iostream>
using namespace std;
class example{
    private:
    int a,b;
    public:
    example(int x,int y){
        a=x;
        b=y;
    }
    example(example &e){
        a=e.a;
        b=e.b;
    }
    void display(){
        cout<<"a=="<<a<<"b=="<<b;
    }
};
int main(){
    example e1(1500,2100);
    example e2(e1);
    e2.display();
    return 0;
}